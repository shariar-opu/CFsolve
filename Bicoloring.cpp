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

const int inf = 223;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
vector<int>adj[inf];
int col[inf];

bool bfs(int s){
    reset(col,-1);
    col[s] = 1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(col[v] == -1){
                if(col[u] == 1) col[v] = 2;
                else col[v] = 1;
                q.push(v);
            }
            else if(col[v] == col[u]) return 0;
        }
    } 
    return 1;

}

void solve(int tc){
    int n;
    while(cin >> n){
        if(!n) break;

        for(int i = 0; i <= n; i++){
            adj[i].clear();
        }

        int m;  cin >> m;
        for(int i = 0; i < m; i++){
            int u, v;   cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        if(bfs(0)) cout << "BICOLORABLE.\n";
        else cout << "NOT BICOLORABLE.\n";
    }
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}