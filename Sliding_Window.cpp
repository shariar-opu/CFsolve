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
    ll n,k;    cin >> n >> k;
    vector<ll>arr(n);
    for(ll &i : arr) cin >> i;
    vector<ll>mx,mn;
    for(ll i = 0; i < n - (k-1); i++){
        ll x = INT_MIN, y = INT_MAX;
        for(ll j = i; j < i+k; j++){
            x = max(x,arr[j]);
            y = min(y, arr[j]);
        }
        mx.pb(x);
        mn.pb(y);
    }
    for(auto u : mn) cout << u << " ";
    cout << endl;
    for(auto u : mx) cout << u << " ";
    cout << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}