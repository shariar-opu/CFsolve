#include<bits/stdc++.h>
using namespace std;
const int inf = 1007;
const int mod = 1e9 + 7;
int n, dp[inf][inf], mark[inf][inf];
char arr[inf][inf];

int solve(int x, int y){
    if(arr[x][y] == '*' || x > n - 1 || y > n - 1) return 0;
    if(x == n - 1 && y == n - 1) return 1;
    if(mark[x][y]) return dp[x][y];

    int res = (solve(x + 1, y) + solve(x, y + 1)) % mod;

    mark[x][y] = 1;

    return dp[x][y] = res % mod;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    cout << solve(0, 0) % mod << endl;
}