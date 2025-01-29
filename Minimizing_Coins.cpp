#include<bits/stdc++.h>
using namespace std;
const int inf = 1e6;
long long n, coins[107], dp[inf + 7];

long long solve(long long price){
    if(price == 0) return 0;
    if(dp[price] != -1) return dp[price];

    long long res = 99999999999;
    for(int i = 0; i < n; i++){
        if(price - coins[i] >= 0){
            res = min(res, solve(price - coins[i]) + 1);
        }
    }

    return dp[price] = res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(dp, -1, sizeof(dp));
    
    long long price;  cin >> n >> price;
    for(int i = 0; i < n; i++) cin >> coins[i];

    long long ans = solve(price);
    if(ans == 99999999999) cout << -1 << endl;
    else cout << ans << endl;
}