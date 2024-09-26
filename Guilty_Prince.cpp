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

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 30;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
int m, n, cnt;
bool vis[inf][inf];
char ch[inf][inf];
int dx[] = {-1, +1, 0, 0};
int dy[] = {0, 0, -1, +1};

void dfs(int x, int y){
    vis[x][y] = 1;
    cnt++;
    for(int i = 0; i < 4; i++){
        int x1 = x + dx[i];
        int y1 = y + dy[i];
        if(x1 >= 0 && x1 < n && y1 >= 0 && y1 < m && !vis[x1][y1]  && ch[x1][y1] == '.'){
            dfs(x1,y1);
        }
    }
}

void solve(int tc){
    mem(vis,0);
    cnt = 0;
    cin >> m >> n;
    int x, y;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> ch[i][j];
            if(ch[i][j] == '@') x = i, y = j;
        }
    }

    dfs(x,y);
    cout << "Case " << tc << ": " << cnt << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}