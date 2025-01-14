#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll coins[255], dp[55][255], n, m;
ll solve(ll coin, ll j){
    if(coin == 0) return 1;
    if(dp[j][coin]) return dp[j][coin];

    ll res = 0; 
    for(int i = j; i < m; i++){
        if(coin - coins[i] >= 0){
            res += solve(coin - coins[i], i);
        }
    }

    return dp[j][coin] = res;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> coins[i];
    }
    
    cout << solve(n, 0) << endl;
}