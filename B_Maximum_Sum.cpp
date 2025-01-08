#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
  int n, k; cin >> n >> k;
  vector<ll> arr(n);
  for(ll &i : arr) cin >> i;

  sort(arr.begin(), arr.end());

  ll sum = accumulate(arr.begin(), arr.end(), 1ll*0);
  ll l1 = 0, r1 = 1, r11 = n - 2, mx = sum - arr[n-1];
  ll l2 = 2, r2 = 3, r22 = n - 1, mn = sum - arr[0] - arr[1];

  for(int i = 1; i < k; i++){
    mx -= min(arr[l1] + arr[r1], arr[r11]);
    if(arr[l1] + arr[r1] >= arr[r11]) r11--;
    else l1 = r1 + 1, r1 = l1 + 1;
    mn -= min(arr[l2] + arr[r2], arr[r22]);
    if(arr[l2] + arr[r2] >= arr[r22]) r22--;
    else l2 = r2 + 1, r2 = l2 + 1;
  }

  cout << max(mn, mx) << endl;
}

int32_t main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  int t = 1;  cin >> t;
  for(int i = 1; i <= t; i++) solve(i);
  
}