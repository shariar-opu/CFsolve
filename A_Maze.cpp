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

const int inf = 515;
const int mod = 998244353;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

int n, m, r;
char maze[inf][inf];
bool vis[inf][inf];

void dfs(int x, int y){
    vis[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int x1 = dx[i] + x;
        int y1 = dy[i] + y;
        if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && maze[x1][y1] != '#' && !vis[x1][y1] && r){
            r--;
            dfs(x1,y1);
        }
    }
}
void solve(int tc){
    int k, cnt = 0, x, y;    cin >> n >> m >> k;
    bool ok = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> maze[i][j];
            if(maze[i][j] == '.') {
                cnt ++;
               if(ok) x = i, y = j, ok = 0;
            }
        }
    }
    r = cnt - k - 1;

    dfs(x, y);

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(maze[i][j] == '.' && !vis[i][j]) cout << 'X';
            else cout << maze[i][j];
        }
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

    return 0;
}