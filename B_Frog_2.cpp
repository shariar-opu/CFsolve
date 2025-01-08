#include<bits/stdc++.h>
using namespace std;
const int inf = 1e5 + 5;
int n, k, arr[inf], dp[inf], vis[inf];
int solve(int idx){
    if(idx == n) return 0;
    if(vis[idx]) return dp[idx];

    int res = INT_MAX;
    for(int i = 1; i <= k; i++){
        if(idx + i <= n){
            int cost = abs(arr[idx] - arr[idx+i]) + solve(idx+i);
            res = min(res, cost);
        }
    }

    vis[idx] = 1;
    dp[idx] = res;
    return res;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int ans = solve(1);
    cout << ans << endl;
}