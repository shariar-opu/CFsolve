#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<ll> arr;
bool calc(ll val){
  int l = 0, r = 1, res = 0;
  bool ok = 0;
  if(n & 1){
    while(r < n){
        if(abs(arr[l] - arr[r]) > val){
            if(!ok){
                r--, l--;
                ok = 1;
            }
            else res++;
        }
        if(res) return false;
        l += 2, r += 2;
    }
  }
  else {
    while(r < n){
        if(abs(arr[l] - arr[r]) > val) res++;
        if(res) return false;
        l += 2, r += 2;
    }
  }
  return true;
}

ll bs(){
  ll l = 1, r = 1e18, ans = 0;
  while(r - l >= 0){
    ll mid = (r + l) / 2;
    if(calc(mid)){
      ans = mid;
      r = mid - 1;
    }
    else l = mid + 1;
  }

  return ans;
}

void solve(){
  cin >> n;
  arr.resize(n);
  for(int i = 0; i < n; i++) cin >> arr[i];

  cout << bs() << endl;
}

int main()
{
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

  int t;  cin >> t;
  while(t--) solve();
}