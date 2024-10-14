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

const int inf = 1005;
const int mod = 998244353;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
ll gcd(ll a, ll b){ return __gcd(a, b);}
ll lcm(ll a, ll b){ return ((a*b)/gcd(a, b));}

char ch[inf][inf];
bool vis[inf][inf];
int n, m, k;
string s;

void dfs(int x, int y){
    vis[x][y] = 1;

    for(int i = 0; i < 4; i++){
        int x1 = dx[i] + x;
        int y1 = dy[i] + y;

        if(x1 > 0 && x1 <= n && y1 > 0 && y1 <= m && !vis[x1][y1] && ch[x1][y1] == '.' && k > 0){
            k--;
            if(i == 0) s += 'D';
            else if(i == 1) s += 'L';
            else if(i == 2) s += 'R';
            else s += 'U';
            dfs(x1, y1);
        }
    }

}
void solve(int tc){
    reset(vis, 0);
    s = "";

    cin >> n >> m >> k;

    int x = 0, y = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> ch[i][j];
            if(ch[i][j] == 'X') x = i, y = j;
        }
    }

    if(k & 1) {
        cout << "IMPOSSIBLE\n";
        return;
    }

    int need = k;
    k /= 2;

    dfs(x, y);

    string t = "", gg = s;
    for(auto u : s){
        if(u == 'D') t += 'U';
        if(u == 'U') t += 'D';
        if(u == 'R') t += 'L';
        if(u == 'L') t += 'R';
    }
    for(int i = 0; i < k; i++){
        if(i & 1) s += gg;
        else s += t;
    }

    string tmp = "";
    for(auto u : s){
        if(u == 'D') tmp += 'U';
        if(u == 'U') tmp += 'D';
        if(u == 'R') tmp += 'L';
        if(u == 'L') tmp += 'R';
    }
    reverse(all(tmp));
    
    if(!sz(s)) cout << "IMPOSSIBLE\n";
    else cout << s + tmp << endl;

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