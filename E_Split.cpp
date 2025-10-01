#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, k;   cin >> n >> k;
    map<int, int> cnt;
    vector<int> arr(n);
    for(int &i: arr) {
        cin >> i;
        cnt[i]++;
    }

    for(auto u: cnt) {
        if(u.second % k){
            cout << 0 << '\n';
            return;
        }
    }

    map<int, int> mp;
    int r = -1;
    ll ans = 0;
    for(int l = 0; l < n; l++) {
        while(r < n - 1) {
            if(mp[arr[r + 1]] < cnt[arr[r + 1]] / k) {
                mp[arr[r + 1]]++;
                r++;
            }
            else break;
        }
        ans += (r - l + 1);
        mp[arr[l]]--;
    }

    cout << ans << '\n';

    //time complexity: O(t * n * log (n))
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}