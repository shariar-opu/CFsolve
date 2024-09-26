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

const int inf = 123;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
int gcd(int a, int b){ return __gcd(a,b);}
int lcm(int a,int b){ return ((a*b)/gcd(a,b));}

bool vis[inf][inf];
char ch[inf][inf];
int n, m;

void dfs(int x, int y, char col){
    vis[x][y] = 1;
    ch[x][y] = col;
    if(col == 'B') col = 'W';
    else col = 'B';
    
    for(int i = 0; i < 4; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && !vis[x1][y1] && ch[x1][y1] == '.'){
            dfs(x1,y1,col);
        }
    }
}

void solve(int tc){
    reset(vis,0);
    cin >> n >> m;
    vector<pair<int, int>> tmp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ch[i][j];
            if(ch[i][j] == '.') tmp.pb({i,j});
        }
    }
    for(auto u : tmp){
        if(!vis[u.first][u.second]){
            dfs(u.first, u.second,'B');
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++) cout << ch[i][j];
        cout << endl;
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