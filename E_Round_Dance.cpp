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

const int inf = 2e5+5;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

vector<set<int>>adj(inf);
int vis[inf], n = inf;
bool ok;

void dfs(int u){
    vis[u] = 1;

    for(auto v : adj[u]){
        if(!vis[v]) dfs(v);
        else if(vis[v] == -1){
            ok = 1;
            return;
        }
    }
    vis[u] = -1;
}
void solve(int tc){
    for(int i = 0; i <= n; i++){
        adj[i].clear();
        vis[i] = 0;
    }

    cin >> n;
    vector<int>arr(n+1);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        adj[i].in(arr[i]);
        adj[arr[i]].in(i);
    }

    int cmp = 0, cnt = 0;
    for(int i = 1; i <= n; i++){
        if(!vis[i]){
            dfs(i);
            cmp++;
            if(ok) cnt++;
            ok = 0;
        }
    }
    if(cmp - cnt) cout << cnt + 1 << " " << cmp << endl;
    else cout << cnt << " " << cmp << endl;
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