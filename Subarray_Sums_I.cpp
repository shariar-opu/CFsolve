#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    ll n, x, sum = 0;   cin >> n >> x;
    vector<ll> arr(n + 1, 0), pre(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
        sum += arr[i];
        pre[i] = sum;
    }

    map<ll, int> mp;
    ll ans = 0, cnt = 0;
    for(int i = 1; i <= n; i++){
        mp[pre[i - 1]]++;
        ans = pre[i] - x;
        cnt += mp[ans];
    }

    cout << cnt << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}