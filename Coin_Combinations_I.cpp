#include<bits/stdc++.h>
using namespace std;
const int inf = 1e6;
const int mod = 1e9 + 7;
long long n, coins[107], dp[inf + 7];

long long solve(long long price){
    if(price == 0) return 1;
    if(dp[price] != -1) return dp[price];

    long long res = 0;
    for(int i = 0; i < n; i++){
        if(price - coins[i] >= 0){
            res = (res + solve(price - coins[i])) % mod;
        }
    }

    return dp[price] = res % mod;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(dp, -1, sizeof(dp));
    
    long long price;  cin >> n >> price;
    for(int i = 0; i < n; i++) cin >> coins[i];

    cout << solve(price) << endl;
}