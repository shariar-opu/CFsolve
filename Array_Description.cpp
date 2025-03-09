#include<bits/stdc++.h>
using namespace std;
const int inf = 1e5;
int n, m;
vector<int> arr;
int dp[inf + 7][107];

bool valid(int x, int y){
    return x >= 0 && y < m;
}

int solve(int x, int pre){
    if(!arr[x] || arr[x] == pre) return 1;
    if(dp[x][pre] != -1) return dp[x][pre];
    
    int &res = dp[x][pre] = 0;

    if(!arr[x] && valid(x, x - 1)) res += solve(x, arr[x - 1] - 1);
    if(!arr[x] && valid(x, x - 1)) res += solve(x, arr[x - 1]);
    if(!arr[x] && valid(x, x - 1)) res += solve(x, arr[x - 1] + 1);

    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(dp, -1, sizeof(dp));

    cin >> n >> m;
    arr.resize(n);
    for(int &i : arr) cin >> i;

    int ans = solve(n - 1, arr[n - 1]);

    cout << ans << endl;
}