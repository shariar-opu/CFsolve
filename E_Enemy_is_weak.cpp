#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
template<typename T> using os_less = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using os_greater = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(int tc){
    int n;  cin >> n;

    vector<ll> arr(n);
    for(ll &i : arr) cin >> i;

    os_less<ll> osl;
    vector<ll> holdl(n);
    for(int i = n - 1; i >= 0; --i){
        osl.insert(arr[i]);
        holdl[i] = osl.order_of_key(arr[i]);
    }

    os_greater<ll> osg;
    vector<ll> holdg(n);
    for(int i = 0; i < n; i++){
        osg.insert(arr[i]);
        holdg[i] = osg.order_of_key(arr[i]);
    }

    ll ans = 0;
    bool ok = 0;
    for(int i = 0; i < n - 1; i++){
        if(ok){
            ans += (holdg[i] * holdl[i]);
        }
        if(holdl[i] >= 2 && !ok){
            ok = 1;
        }
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