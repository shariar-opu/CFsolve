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

const int inf = 2e4;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
vector<int>adj[inf+123];
int lvl[inf+123];

void bfs(int s){
    reset(lvl,-1);
    lvl[s] = 0;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(lvl[v] == -1){
                lvl[v] = lvl[u]+1;
                q.push(v);
            }
        }
    }
}

void solve(int tc){
    for(int i = 0; i <= inf; i++){
        adj[i].clear();
    }

    int n, m;   cin >> n >> m;
    for(int i = 1; i <= inf; i++){
        if(i*2 <= inf) adj[i].pb(i*2);
        if(i-1 > 0) adj[i].pb(i-1);
    }
    bfs(n);
    cout << lvl[m] << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    //cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}