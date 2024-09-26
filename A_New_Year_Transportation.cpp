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

const int inf = 3e4+123;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
vector<int>adj[inf];
bool vis[inf];
bool exist[inf];

void dfs(int u){
    vis[u] = 1;
    for(auto v : adj[u]){
        if(!vis[v]) dfs(v);
    }
}

void solve(int tc){
    for(int i = 0; i <= inf; i++){
        adj[i].clear();
        vis[i] = exist[i] = 0;
    }

    int n,  k;  cin >> n >> k;
    vector<int>arr(n+1,0);
    for(int i = 1; i < n; i++) cin >> arr[i];

    for(int i = 1; i < n;){
        int a = arr[i]+i;
        adj[i].pb(a);
        adj[a].pb(i);
        exist[i] = 1;
        exist[a] = 1;
        i = a;
    }

    for(int i = 1; i < n; i++){
        if(!vis[i] && exist[i]) dfs(i);
    }

    exist[k]? yes:no;

}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}