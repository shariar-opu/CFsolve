#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    ll n, w;    cin >> n >> w;
    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++) {
        int a;  cin >> a;
        vp.push_back({a, i + 1});
    }

    sort(vp.rbegin(), vp.rend());
    vector<int> ans;
    ll sum = 0, ww = (w + 1) / 2;
    for(auto u: vp) {
        sum += u.first;
        ans.push_back(u.second);
        if(sum >= ww && sum <= w) {
            break;
        }
        else if(sum > w) {
            sum -= u.first;
            ans.pop_back();
        }
    }
    sort(ans.begin(), ans.end());
    if(sum < ww || sum > w) cout << -1 << '\n';
    else {
        cout << ans.size() << '\n';
        for(auto u: ans) cout << u << ' ';
        cout << '\n';
    }
 
    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}
