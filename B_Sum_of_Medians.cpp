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
ll arr[1000123];
void solve(int tc){
    ll n,k;    cin >> n >> k;
    ll gg = k * n;
    for(ll i = 1; i <= gg; i++) cin >> arr[i];
    ll mid = 0, l = 0, p = 0;
    gg++;
    if(n&1) {
        mid = (n+1)/2;
        p = mid;
    }
    else {
        mid = n/2;
        p = (mid+1);
    }
    ll r = gg - p, ans = 0;
    while(k--){
        if(r <= 0)break;
        ans += arr[r];
        r -= p;
    }
    cout << ans << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}