#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
template<typename T> using ordered_set = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(int tc){
    ll n, k;   cin >> n >> k;
    ordered_set<ll> st;
    st.insert(0);
    ll ans = 0, sum = 0;
    for(int i = 1; i <= n; i++){
        ll a;  cin >> a;
        sum += a;

        ll cur = sum - k * i;
        ans += st.size() - st.order_of_key(cur);
        st.insert(cur);
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