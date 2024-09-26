#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define in insert
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define dn(a) cout << a << '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define watch(x) cerr << '\n' << (#x) << " is " << (x) << '\n'
#define time cerr << "time = " << clock() << " ms" << '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 1000000000;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}

void solve(int tc){
    int n;  cin >> n;

    map<int, int> mp;
    set<pair<int,int>>vp;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    for(auto u : mp){
        if(u.second < 2){
            cout << -1 << endl;
            return;
        }
    }
    for(int i = 0; i < n; i++){
        auto l = lower_bound(all(arr),arr[i]);
        auto u = upper_bound(all(arr),arr[i]);
        vp.in({l - arr.begin(),u - arr.begin()});
    }

    for(auto u : vp){
        int l = u.first, r = u.second-1;
        cout << r+1 << " ";
        for(int i = l; i < r; i++) cout << i+1 << " ";
    }
    cout << endl;
}

int32_t main(){
    optimize();
    int t = 1;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}