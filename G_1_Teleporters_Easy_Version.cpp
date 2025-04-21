#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    ll n, c;   cin >> n >> c;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i] += i + 1;
    }

    sort(arr.begin(), arr.end());

    ll ans = 0;
    for(auto u : arr){
        if(c - u < 0){
            cout << ans << endl;
            return;
        }
        c -= u;
        ans++;
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