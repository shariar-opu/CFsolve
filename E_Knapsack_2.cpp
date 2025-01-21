#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 1e5;
ll dp[107][inf + 7], n;
vector<pair<ll, ll>> vp;

ll solve(int j, int val){
    if(val == 0) return 0;
    if(j < 0) return INT_MAX;
    if(dp[j][val] != -1) return dp[j][val];

    ll res = solve(j - 1, val);
    if(val >= vp[j].second){
        res = min(res, solve(j - 1, val - vp[j].second) + vp[j].first);
    }

    return dp[j][val] = res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(dp, -1, sizeof(dp));

    ll w;  cin >> n >> w;
    for(int i = 0; i < n; i++) {
        ll a, b;   cin >> a >> b;
        vp.push_back({a, b});
    }

    for(int i = inf; i >= 0; --i){
        if(w >= solve(n - 1, i)){
            cout << i << endl;
            break;
        }
    }

    return 0;
}