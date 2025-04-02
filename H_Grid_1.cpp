#include<bits/stdc++.h>
using namespace std;

const int inf = 1000, mod = 1e9 + 7;
char grid[inf + 7][inf + 7];
int dp[inf + 7][ inf + 7];
int n, m;

int f(int x, int y){
    if(grid[x][y] == '#' || x >= n || y >= m) return 0;
    if(x == n - 1 && y == m - 1) return 1;
    if(dp[x][y] != -1) return dp[x][y];

    int &res = dp[x][y] = f(x + 1, y) % mod;
    res = (res + f(x, y + 1)) % mod;

    return res % mod;
}

int main(){
    ios_base:: sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m;
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++) dp[i][j] = -1;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> grid[i][j];
        }
    }

    cout << f(0, 0) << endl;
}