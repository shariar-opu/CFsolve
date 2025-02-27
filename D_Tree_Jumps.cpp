#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef long long ll;
typedef double dl;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

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
#define file(); freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define Bismillah() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = 3e5 + 7;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};

ll pw(ll a, ll b);
ll gcd(ll a, ll b);
ll lcm(ll a, ll b);

vector<int> adj[inf];
int lvl[inf], vis[inf];

void bfs(int s){
    reset(lvl, -1);
    lvl[s] = 1;
    queue<int> q;
    q.push(s);
    while(!q.empty()){
        int u = q.front(), cnt = 0;
        q.pop();
        for(auto v : adj[u]){
            if(lvl[v] == -1){
                lvl[v] = lvl[u] + 1;
                q.push(v);
                cnt++;
            }
        }
        vis[u] = cnt;
    }
}

void solve(int tc){
    int n;  cin >> n;
    
    for(int i = 0; i <= n; i++){
        adj[i].clear();
        vis[i] = 0;
    }
    
    for(int i = 2; i <= n; i++){
        int v;  cin >> v;
        adj[i].pb(v);
        adj[v].pb(i);
    }

    bfs(1);
    map<int, int> mp;
    int cnt = 0;
    for(int i = 2; i <= n; i++){
        mp[lvl[i]] ++;
        cnt += vis[i];
    }

    // for(int i = 1; i <= n; i++) cout << "node: " << i << "=> " << lvl[i] << endl;
    int last = 1, ans = 0;
    for(auto u : mp) {
        // cout << "mp : " << u.first << " " << u.second << endl;
        ans = (ans + (last * u.second)) % mod;
        last = u.second;
    }
    
    // cout << cnt << " " << ans << " " << ans - cnt + 1 << endl;

    ans -= (cnt - 1);

    cout << ans % mod << endl;
}

int32_t main(){
    Bismillah();
    int t = 1;
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
    return 0;
}

ll pw(ll a, ll b){
    a %= mod;
    ll r = 1;
    while(b > 0){
        if(b & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return r;
}
ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a%b);
}
ll lcm(ll a, ll b){
    return ((a*b)/gcd(a, b));
}