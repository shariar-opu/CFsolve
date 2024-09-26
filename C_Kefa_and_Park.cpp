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

const int inf = 1e5+123;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
int gcd(int a, int b){ return __gcd(a,b);}
int lcm(int a,int b){ return ((a*b)/gcd(a,b));}
vector<int>adj[inf];
bool vis[inf];
vector<int>arr(inf);
int n, m, ans;

bool isleaf(int u){
    for(auto v: adj[u]){
        if(!vis[v])return 0;
    }
    return 1;
}
void dfs(int u){
    vis[u] = 1;
    if(arr[u] > m){
        return;
    }
    if(isleaf(u) && arr[u] <= m)ans++;
    for(auto v : adj[u]){
        if(!vis[v]) {
            if(arr[v]) arr[v] += arr[u];
            dfs(v);
        }
    }
    return;
}

void solve(int tc){
    ans = 0; 
    for(int i = 0; i <= inf; i++){
        adj[i].clear();
        vis[i] = 0;
    }
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n-1; i++){
        int u,v;    cin >> u >> v;
        u--,v--;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(0);
    cout << ans << endl;

}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}