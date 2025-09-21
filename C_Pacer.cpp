#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ll int

void solve(int tc){
    int n, m; cin >> n >> m;

    vector<pair<int, int>> vp;
    vp.push_back({0, 0});
    for(int i = 0; i < n; i++) {
        int a, b;   cin >> a >> b;
        vp.push_back({a, b});
    }

    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int dif = abs(vp[i].first - vp[i - 1].first);
        if(vp[i].second == vp[i - 1].second){
            if(dif % 2 == 0) ans += dif;
            else ans += dif - 1;
        }
        else {
            if(dif & 1) ans += dif;
            else ans += dif - 1;
        }
    }
    
    int ed = vp[n].first;
    if(ed < m) ans += m - ed;
    cout << ans << '\n';

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}