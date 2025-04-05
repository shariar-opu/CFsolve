#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
const int inf = 1e6, mod = 1e9 + 7;
ll n;
vector<int> coins;
vector<vector<int>> dp;
 
ll solve(ll j, int price){
    if(j >= n) return 0;
    if(price < 0) return 0;
    if(price == 0) return 1;
    if(dp[j][price] != -1) return dp[j][price];
 
    return dp[j][price] = ((solve(j + 1, price - coins[j])) + (solve(j + 1, price))) % mod;
}
 
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll price;  cin >> n >> price;
 
    coins.resize(n);
    dp.resize(n + 7, vector<int> (price + 7, -1));
    
    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }
 
    cout << solve(0, price) << endl;
}
