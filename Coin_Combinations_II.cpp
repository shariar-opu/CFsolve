#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e6, mod = 1e9 + 7;
ll n, coins[107], dp[107][inf + 7], mark[107][inf + 7];

ll solve(ll price, int j){
    if(price == 0) return 1;
    if(mark[j][price]) return dp[j][price];

    ll res = 0;
    for(int i = j; i < n; i++){
        if(price - coins[i] >= 0){
            res = (res + solve(price - coins[i], i)) % mod;
        }
    }
    mark[j][price] = 1;
    return dp[j][price] = res % mod;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll price;  cin >> n >> price;
    for(int i = 0; i < n; i++) cin >> coins[i];

    cout << solve(price, 0) << endl;
}