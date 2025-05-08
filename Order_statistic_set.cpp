#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(int tc){
    ordered_set<ll> st;

    int q;  cin >> q;
    while(q--){
        char c; cin >> c;
        ll x;  cin >> x;
        if(c == 'I') st.insert(x);
        else if(c == 'D') st.erase(x);
        else if(c == 'C') cout << st.order_of_key(x) << '\n';
        else if(c == 'K'){
            if(st.size() <= x - 1) cout << "invalid\n";
            else cout << *st.find_by_order(x - 1) << '\n';
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