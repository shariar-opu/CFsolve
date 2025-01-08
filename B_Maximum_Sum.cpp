#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
  int n, k;   cin >> n >> k;
  vector<ll> arr(n + 1, 0), pre(n + 1, 0);
  for(int i = 1; i <= n; i++){
    cin >> arr[i];
  }
  sort(arr.begin(), arr.end());
  for(int i = 1; i <= n; i++){
    pre[i] = pre[i-1] + arr[i];
  }
  
  ll ans = 0;
  for(int i = 0; i <= k; i++){
    ans = max(ans, pre[n - (k - i)] - pre[2 * i]);
  }
  cout << ans << endl;
}

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t = 1;
  cin >> t;
  for(int i = 1; i <= t; i++) solve(i);
  return 0;
}