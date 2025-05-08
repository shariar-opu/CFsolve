#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    long long ans = 0;
    ordered_set<int> st;
    for(int i = n - 1; i >= 0; --i){
        st.insert(arr[i]);
        ans += st.order_of_key(arr[i]);
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}