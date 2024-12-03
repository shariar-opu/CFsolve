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

const int inf = 105;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0, -1, -1, +1, +1};
int dy[] = {0, 0, -1, +1, -1, +1, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

char ch[inf][inf];
vector<pair<int, int>>adj;
bool vis[inf][inf];
int n, m;

void dfs(int x, int y){
    vis[x][y] = 1;

    for(int i = 0; i < 8; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];

        if(x1 > 0 && x1 <= n && y1 > 0 && y1 <= m && ch[x1][y1] == '@' && !vis[x1][y1]) dfs(x1, y1);
    }
}

void solve(int tc){
    while(1){
        adj.clear();
        reset(vis,0);

        cin >> n >> m;
        if(!n && !m) return;

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> ch[i][j];
                if(ch[i][j] == '@') adj.pb({i, j});
            }
        }
        int ans = 0;
        for(auto u : adj){
            if(!vis[u.first][u.second]){
                ans++;
                dfs(u.first, u.second);
            }
        }
        cout << ans << endl;
    }
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }

    return 0;
}