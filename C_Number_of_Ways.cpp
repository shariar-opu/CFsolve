#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long

template<typename T> using os_less = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(int tc){
    ll n, k = 0;  cin >> n;
    vector<ll> arr(n);
    for(ll &i : arr) {
        cin >> i;
        k += i;
    }

    if(k % 3) {
        cout << 0 << '\n';
        return;
    }

    k /= 3;
    ll sum = 0, ans = 0, cnt = 0;
    for(int i = 0; i < n - 1; i++){
        sum += arr[i];
        if(sum == k * 2) ans += cnt;
        if(sum == k) cnt ++;
    }

    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}