#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define ins insert
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
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

void solve(int tc){
    ll n;  cin >> n;
    vector<ll>arr(n-1),a;
    for(ll i = 0; i < n-1; i++){
        cin >>arr[i];
        if(!i)a.pb(arr[i]+1);
        a.pb(a[i]+arr[i]);
    }
    for(int i = 0; i < n-1; i++){
        if(a[i]<=arr[i]){
            a[i] = ((arr[i]+1) * a[i-1]) + arr[i-1];
            for(int j = i+1; j < n; j++){
                a[j] = a[j-1] + arr[j-1];
            }
        }
    }
    for(auto u : a) cout << u << " ";
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