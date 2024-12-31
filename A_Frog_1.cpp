#include<bits/stdc++.h>
using namespace std;
const int inf = 1e5 + 7;
int n;
int arr[inf], dp[inf];
int solve(int idx){
    if(idx == n - 1) return arr[n-1];
    if(idx == n - 2) return abs(arr[n-1] - arr[n-2]);
    if(dp[idx]) return dp[idx];

    int res = INT_MAX;
    for(int i = 1; i <= 2; i++){
        res = min(res, abs(arr[idx] - arr[idx+i]) + solve(idx+i));
    }
    dp[idx] = res;
    return dp[idx];
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = solve(0);
    cout << ans << endl;
}