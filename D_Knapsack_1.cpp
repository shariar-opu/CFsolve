#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 1e5;
ll dp[inf + 7], n;
vector<pair<ll, ll>> vp;

ll solve(int w, int j){
    if(w == 0) return 0;
    if(dp[w]) return dp[w];

    ll res = 0;

    for(int i = 0; i < n; i++){
        if(w - vp[i].first >= 0 && i != j) {
            res = max(res, vp[i].second + solve(w - vp[i].first, i));
        }
    }

    return dp[w] = res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int w;  cin >> n >> w;
    for(int i = 0; i < n; i++) {
        ll a, b;   cin >> a >> b;
        vp.push_back({a, b});
    }

    // sort(vp.begin(), vp.end(), [](pair<ll, ll> a, pair<ll, ll> b){
    //     if(a.second == b.second) return a.first < b.first;
    //     else return a.second > b.second;
    // });

    // for(auto u : vp) cout << u.first << " " << u.second << endl;

    cout << solve(w, 0) << endl;
    return 0;
}