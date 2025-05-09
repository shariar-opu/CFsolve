#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

#define ll long long
template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const int inf = INT_MAX;

void solve(int tc){
    int n, q;   cin >> n >> q;

    ordered_set<int> st;
    vector<int> arr(n + 1, -1);
    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        if(arr[a] == -1) arr[a] = i;
        st.insert(i);
    }

    int cur = -1;
    while(q--){
        int x;  cin >> x;
        int ans = st.order_of_key(arr[x]);
        cout << ans + 1 << '\n';
        
        st.erase(arr[x]);
        arr[x] = cur;
        st.insert(cur);
        cur--;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}