#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 1e5;
ll dp[107][inf + 7], n;
vector<pair<ll, ll>> vp;

ll solve(int j, int w){
    if(w == 0) return 0;
    if(j < 0) return 0;
    if(dp[j][w]) return dp[j][w];

    ll res = solve(j - 1, w);
    if(w >= vp[j].first) res = max(res, solve(j - 1, w - vp[j].first) + vp[j].second);
    
    return dp[j][w] = res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int w;  cin >> n >> w;
    for(int i = 0; i < n; i++) {
        ll a, b;   cin >> a >> b;
        vp.push_back({a, b});
    }

    cout << solve(n - 1, w) << endl;
    return 0;
}