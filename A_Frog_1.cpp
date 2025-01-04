#include<bits/stdc++.h>
using namespace std;
const int inf = 1e5 + 7;
int n, arr[inf], dp[inf];
int solve(int idx){
    if(idx == n) return 0;
    if(dp[idx]) return dp[idx];

    int res = abs(arr[idx] - arr[idx+1]) + solve(idx+1);
    if(idx + 2 <= n) res = min(res, abs(arr[idx] - arr[idx+2]) + solve(idx+2));
    // }
    dp[idx] = res;
    return dp[idx];
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    int ans = solve(1);
    cout << ans << endl;
}