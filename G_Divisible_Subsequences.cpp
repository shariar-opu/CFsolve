#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int d, n;   cin >> d >> n;
    vector<ll> arr(n + 1);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    ll pre[n + 1] = {};
    for(int i = 1; i <= n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }

    map<int, int> mp;
    mp[0] = 1;
    ll ans = 0;
    for(int i = 1; i <= n; i++) {
        ans += mp[pre[i] % d];
        mp[pre[i] % d] ++;
    }

    cout << ans << '\n';

    //time complexity: O(t * log(n))
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}