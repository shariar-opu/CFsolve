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

const int inf = 1000000000;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
map<string, vector<string>>adj;
map<string, int>lvl;
map<string, string>par;

void bfs(string s){
    lvl.clear();
    lvl[s] = 1;
    queue<string>q;
    q.push(s);
    while(!q.empty()){
        string u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(lvl[v] == 0){
                lvl[v] = lvl[u]+1;
                par[v] = u;
                q.push(v);
            }
        }
    }
}

void solve(int tc){
    int n;
    bool ok = 0;
    while(cin >> n){
        if(ok) cout << endl;
        ok = 1;

        adj.clear();
        par.clear();

        for(int i = 0; i < n; i++){
            string u, v;    cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        string s, t;    cin >> s >> t;
        bfs(s);
        if(lvl[t] == 0){
            cout << "No route\n";
            continue;
        }
        vector<pair<string, string>> ans;
        while(!par[t].empty()){
            ans.pb({par[t],t});
            t = par[t];
        }
        reverse(all(ans));
        for(auto u : ans) cout << u.first << " " << u.second << endl;
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