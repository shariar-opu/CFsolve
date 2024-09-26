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

const int inf = 2000000000;
const int mx = 212;

int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

int n, m;
char ch[mx][mx];
int lvlFire[mx][mx], lvlJane[mx][mx];
vector<pair<int, int>> fs;

void bfsFire(){
    reset(lvlFire, -1);
    queue<pair<int, int>> q;
    for(auto u : fs){
        q.push(u);
        lvlFire[u.first][u.second] = 0;
    }

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int x1 = dx[i] + x;
            int y1 = dy[i] + y;

            if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && lvlFire[x1][y1] == -1 && ch[x1][y1] != '#'){
                lvlFire[x1][y1] = lvlFire[x][y] + 1;
                q.push({x1, y1});
            }
        }
    }
}

void bfsJane(int xs, int ys){
    reset(lvlJane, -1);
    queue<pair<int, int>> q;
    q.push({xs, ys});
    lvlJane[xs][ys] = 0;

    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        for(int i = 0; i < 4; i++){
            int x1 = dx[i] + x;
            int y1 = dy[i] + y;

            if(x1 >= 1 && x1 <= n && y1 >= 1 && y1 <= m && lvlJane[x1][y1] == -1 && ch[x1][y1] != '#' && lvlJane[x][y]+1 < lvlFire[x1][y1]){
                lvlJane[x1][y1] = lvlJane[x][y] + 1;
                q.push({x1, y1});
            }
        }
    }
}

void solve(int tc){
    fs.clear();

    cin >> n >> m;
    int x, y;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> ch[i][j];

            if(ch[i][j] == 'J') x = i, y = j;
            if(ch[i][j] == 'F') fs.pb({i, j});
        }
    }

    bfsFire();
    bfsJane(x, y);

    int ans = inf;

    for(int i = 1; i <= n; i++){
        if(lvlJane[i][1] != -1) ans = min(ans, lvlJane[i][1]);
    }
    for(int i = 1; i <= n; i++){
        if(lvlJane[i][m] != -1) ans = min(ans, lvlJane[i][m]);
    }

    for(int i = 1; i <= m; i++){
        if(lvlJane[1][i] != -1) ans = min(ans, lvlJane[1][i]);
    }
    for(int i = 1; i <= m; i++){
        if(lvlJane[n][i] != -1) ans = min(ans, lvlJane[n][i]);
    }

    if(ans == inf) cout << "Case " << tc << ": IMPOSSIBLE" << endl;
    else cout << "Case " << tc << ": " << ans + 1 << endl;
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