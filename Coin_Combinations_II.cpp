#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, price;     cin >> n >> price;
    vector<int> coins(n);
    for(int i = 0; i < n; i++) cin >> coins[i];
    vector<long long> dp(price + 1, 0);
    dp[0] = 1;

    for(int i = 0; i < n; i++){
        for(int val = 1; val <= price; val++){
            if(val - coins[i] >= 0){
                dp[val] = (dp[val] + dp[val - coins[i]]) % mod;
            }
        }
    }

    cout << dp[price];
}