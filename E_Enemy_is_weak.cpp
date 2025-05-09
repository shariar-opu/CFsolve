#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
template<typename T> using ordered_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(int tc){
    int n, ans = 0;  cin >> n;

    ordered_set<int> st;
    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        st.insert(a);
        ans += st.order_of_key(a);
    }
    cout << ans - 2 << '\n';

}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}