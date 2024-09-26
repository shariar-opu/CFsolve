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
const int inf = 2e4;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
vector<int>adj[inf];
bool vis[inf];
bool isNode[inf];
int cnt = 0, cnt1 = 0;

void dfs(int u, int col){
    vis[u] = 1;
    if(col == 1) cnt1++;
    cnt++;
    int tmp;
    if(col == 1) tmp = 2;
    else tmp = 1;
    for(auto v : adj[u]){
        if(!vis[v])dfs(v, tmp);
    }
}

void solve(int tc){
    for(int i = 0; i <= inf; i++){
        adj[i].clear();
        vis[i] = isNode[i] = 0;
    }
    int m;  cin >> m;

    for(int i = 1; i <= m; i++){
        int u, v;   cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
        isNode[u] = isNode[v] = 1;
    }

    int ans = 0;
    for(int i = 1; i <= inf; i++){
        if(isNode[i] && !vis[i]) {
            dfs(i,1);
            ans += max(cnt1, cnt-cnt1);
            cnt = cnt1 = 0;
        }
    }

    cout << "Case " << tc << ": " << ans << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}