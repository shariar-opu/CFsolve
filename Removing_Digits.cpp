#include<bits/stdc++.h>
using namespace std;
const int inf = 1e6+7;
int dp[inf];
int solve(int m){
    if(!m) return 0;
    if(dp[m]) return dp[m];
    int tmp = m, res = INT_MAX;
    while(tmp > 0){
        int r = tmp%10;
        if(r) res = min(res, 1 + solve(m - r));
        tmp /= 10;
    }
    dp[m] = res;
    return dp[m];
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;  cin >> n;
    cout << solve(n) << endl;
}