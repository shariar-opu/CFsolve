#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
    int n;  cin >> n;
    vector<int>arr(n);
    for(int &i : arr) cin >> i;
    
    int ans = 9999999;
    for(int i = 1; i < n; i++){
        ans = min(ans, abs(arr[i] - arr[i - 1]));
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}