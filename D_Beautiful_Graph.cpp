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
#define reset(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = 3e5+5;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

int n = inf, m;
vector<int>adj[inf];
int col[inf];
bool vis[inf];
vector<ll>pow2(n, 1);
ll c1, c0;

bool dfs(int u){
    vis[u] = 1;

    for(auto v : adj[u]){
        if(col[v] == col[u]) return 0;

        if(!vis[v]){
            col[v] = !col[u];

            if(col[v]) c1++;
            else c0++;

            if(!dfs(v)) return 0;
        }
    }
    return 1;
}

void solve(int tc){
    for(int i = 0; i <= n; i++){
        adj[i].clear();
        vis[i] = 0;
        col[i] = -1;
    }
    for(int i = 1; i < n; i++) pow2[i] = (pow2[i-1] * 2) % mod;
    
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int u, v;   cin >> u >> v;

        adj[u].pb(v);
        adj[v].pb(u);
    }

    ll ans = 1;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            col[i] = 1;
            c1 = 1, c0 = 0;

            if(!dfs(i)){
                ans = 0;
                break;
            }
            else ans = (ans * (pow2[c1] + pow2[c0]) % mod) % mod;
        }
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
    return 0;
}