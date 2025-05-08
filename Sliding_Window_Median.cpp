#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;
template<typename T> using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(int tc){
    int n, k;   cin >> n >> k;
    ordered_set<int> st;
    vector<int> arr(n);
    for(int  &i : arr) cin >> i;
    for(int i = 0; i < n; i++) {
        st.insert(arr[i]);
        if(st.size() == k){
            cout << *st.find_by_order((k - 1) / 2) << " ";
            st.erase(st.upper_bound(arr[i - k + 1]));
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