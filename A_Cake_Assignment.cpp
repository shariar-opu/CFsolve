#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    ll k, x;    cin >> k >> x;
    vector<ll> ans;
    while(x != (1LL << k)) {
        if(x < (1LL << k)) {
            ans.push_back(1);
            x *= 2;
        }
        else {
            ans.push_back(2);
            x = (2 * x - (1LL << k + 1));
        }
    }

    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for(auto u: ans) cout << u << ' ';
    cout << '\n';
    

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}