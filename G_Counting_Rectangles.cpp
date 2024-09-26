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
const int mod = 10000007;

ll presum[1001][1001];
void solve(ll tc){
    mem(presum,0);
    ll n,q;    cin >> n >> q;
    for(ll i = 1; i <= n; i++){
        ll h,w;    cin >> h >> w;
        presum[h][w] = presum[h][w] + w*h;
    }
    for(ll i = 1; i <= 1000; i++){
        for(ll j = 2; j <= 1000; j++){
            presum[i][j] = presum[i][j] + presum[i][j-1];
        }
    }
    for(ll j = 1; j <= 1000; j++){
        for(ll i = 2; i <= 1000; i++){
            presum[i][j] = presum[i][j] + presum[i-1][j];
        }
    }
    while(q--){
        ll hs,ws,hb,wb,ans = 0;    cin >> hs >> ws >> hb >> wb;
        ans = presum[hb-1][wb-1] - presum[hs][wb-1] - presum[hb-1][ws] + presum[hs][ws];
        cout << ans << endl;
    }
}

int32_t main(){
    optimize();
    ll t = 1;  
    cin >> t;
    for(ll tc = 1; tc <= t; tc++){
        solve(tc);
    }
}