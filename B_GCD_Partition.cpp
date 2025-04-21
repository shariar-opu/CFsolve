#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
    int64_t n, tot_sum = 0;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
        tot_sum += i;
    }

    int64_t ans = 0, sum = 0;
    for(int i = 0; i < n - 1; i++){
        sum += arr[i];
        ans = max(ans, __gcd(tot_sum - sum, sum));
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}