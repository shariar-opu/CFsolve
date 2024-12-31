#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int dp[1000005];
int solve(int sum){
    if(sum == 0) return 1;
    if(dp[sum]) return dp[sum];
    int res = 0;
    for(int i = 1; i <= 6; i++){
        if(sum >= i){
            res += solve(sum - i);
            res %= mod;
        }
    }
    dp[sum] = res;
    return dp[sum];
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;  cin >> n;
    cout << solve(n) << endl;
}