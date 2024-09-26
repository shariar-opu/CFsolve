#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define n 20
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
  int arr[n+1];
  vector<int>v;
  for(int i = 0; i < n; i++){
    cin >> arr[i];
   
  }
  for(int i = n-1; i >= 0; i--){
     v.pb(arr[i]);
  }
  for(int i = 0; i < v.size() ; i++){
    cout << "N[" << i <<"] = " << v[i] << endl; 
  }
}
int main(){
  solve();
}