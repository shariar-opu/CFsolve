#include<bits/stdc++.h>
using namespace std;

const int inf = 1e5;
vector<int> adj[inf + 7];
int dp[inf + 7];

int f(int node){
    if(dp[node] != -1) return dp[node];
    int &res = dp[node] = 0;

    for(auto u : adj[node]){
        res = max(res, f(u) + 1);
    }

    return res;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);

    int n, m;   cin >> n >> m;

    for(int i = 0; i <= n; i++){
        adj[i].clear();
        dp[i] = -1;
    }

    for(int i = 0; i < m; i++){
        int u, v;   cin >> u >> v;
        adj[u].push_back(v);
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){
        if(dp[i] == -1){
            f(i);
        }
        ans = max(ans, dp[i]);
    }

    cout << ans << endl;
}