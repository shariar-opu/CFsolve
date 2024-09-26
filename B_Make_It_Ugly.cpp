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
    map<int,int>mp;
    int n;  cin >> n;
    vector<int>arr(n);
    for(int &i : arr){
        cin >> i;
        mp[i]++;
    }
    vector<int> v;
    int idx = 0,ans = INT_MAX;
    if(sz(mp) == 1) dn(-1);
    else{
        for(int i = 1; i < n-1; i++){
            if(arr[i] != arr[i-1]){
                ans = min(ans,i);
                break;
            }
        }
        for(int i = n-2; i > 0; --i){
            if(arr[i] != arr[i+1]){
                ans = min(ans, n-(i+1));
                break;
            }
        }
        for(int i = 1; i < n; i++) if(arr[0] != arr[i]) v.pb(i);
        for(int i = 1; i < sz(v);i++){
            if(abs(v[i]-v[i-1])>= 2) ans = min(ans,abs(v[i]-v[i-1])-1);
        }
        dn(ans);
    }
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}