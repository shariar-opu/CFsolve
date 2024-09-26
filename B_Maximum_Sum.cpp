#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e9+7;
int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t;  cin >> t;
  while(t--){
    int n,k;  cin >> n >> k;
    vector<int>arr(n);
    int sum = 0;
    for(int &i : arr){
      cin >> i;
      sum += i;
      sum %= N;
    }

    int ans = 0;
    ans = max(ans,arr[0]);
    for(int i = 1; i < n; i++){
      if(arr[i]+arr[i-1] > arr[i]) arr[i]+=arr[i-1];
      ans = max(ans,arr[i]);
    }
    sum -= ans;
    for(int i = 1; i <= k; i++){
      ans *= 2;
      ans %= N;
    }
    sum += ans;
    sum %= N;
    if(sum < 0) sum += N;
    cout << sum  << endl;
  }
}