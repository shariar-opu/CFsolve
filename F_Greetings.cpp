#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define ll long long

using namespace __gnu_pbds;
using namespace std;
template<typename T> using ordered_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
void solve(int tc){
    int n;  cin >> n;
    vector<pair<ll, ll>> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i].second >> v[i].first;
    }
    sort(v.begin(), v.end());

    ordered_set<ll> st;
    ll ans = 0;
    for(auto u : v){
        ans += st.order_of_key(u.second);
        st.insert(u.second);
    }

    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
    return 0;
}