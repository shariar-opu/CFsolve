#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template<typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve(int tc){
    int n, q;
    cin >> n >> q;
    vector<ll> arr(n);
    ordered_set<ll> st;
    for(ll &i : arr) {
        cin >> i;
        st.insert(i);
    }

    while(q--){
        char c;
        ll l, r;
        cin >> c >> l >> r;
        if(c == '!'){
            st.erase(st.upper_bound(arr[l - 1]));
            st.insert(r);
        }
        else if(c == '?'){
            cout << "Position => " << *st.lower_bound(l) << " , " << *st.upper_bound(r) << endl;
            ll ans = st.order_of_key(r) - st.order_of_key(l);
            if(st.find(l) != st.end() || st.find(r) != st.end()) ans++;
            cout << ans << '\n';
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}