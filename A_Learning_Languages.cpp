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

const int inf = 123;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
vector<int>adj[inf];
bool vis[inf], exist[inf];

void dfs(int u){
    vis[u] = 1;
    for(auto v : adj[u]){
        if(!vis[v])dfs(v);
    }
}

void solve(int tc){
    for(int i = 0; i <= inf; i++){
        adj[i].clear();
        vis[i] = exist[i] = 0;
    }

    int n, m, bokolom = 0,a,b, ans = 0;   cin >> n >> m;
    for(int i = 1; i <= n; i++){
        int k;  cin >> k;
        if(!k){
            bokolom++;
            ans++;
        }
        else{
            cin >> a;
            exist[a] = 1; 
        }
        for(int j = 1; j < k; j++){
            cin >> b;
            exist[b] = 1;
            adj[a].pb(b);
            adj[b].pb(a);
        }
    }
    
    for(int i = 1; i <= m; i++){
        if(!vis[i] && exist[i]){
            dfs(i);
            ans++;
        }
    }
    if(bokolom != n) cout << ans-1 << endl;
    else cout << bokolom << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}