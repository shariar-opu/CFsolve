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

const int inf = 2123;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
int gcd(int a, int b){ return __gcd(a,b);}
int lcm(int a,int b){ return ((a*b)/gcd(a,b));}
vector<int>adj[inf];
int lvl[inf];

void bfs(int s){
    lvl[s] = 1;
    queue<int>q;
    q.push(s);
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto v : adj[u]){
            if(!lvl[v]) {
                lvl[v] = lvl[u]+1;
                q.push(v);
            }
        }
    }
}

void solve(int tc){
    for(int i = 0; i <= inf; i++){
        adj[i].clear();
        lvl[i] = 0;
    }

    int n;  cin >> n;
    vector<int>arr(n+1,0);
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(arr[i] > 0) adj[arr[i]].pb(i);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(arr[i] == -1) bfs(i);
    }
    for(int i = 1; i <= n; i++) ans = max(ans, lvl[i]);
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