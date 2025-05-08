#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
template <typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


void solve(int tc){
    ordered_set<ll> st;
    int q;
    cin >> q;
    while(q--){
        char c;     cin >> c;
        ll x;   cin >> x;
        if(c == '!') st.insert(x);
        else cout << *st.find_by_order(x) << '\n';
    }
    cout << "Values :\n";
    for(auto it = st.begin(); it != st.end(); it++){
        cout << *it << " ";
    }
    cout << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}