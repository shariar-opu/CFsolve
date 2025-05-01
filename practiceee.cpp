#include<bits/stdc++.h>
using namespace std;
 
const int inf = 2e5;
int lvl[inf + 7];
vector<int> adj[inf + 7];
 
int bfs(int s)
{
    lvl[s] = 1;
    queue<int>q;
    q.push(s);
    int res = -1;
    while(!q.empty()){
        int u = q.front();
        res = u;
        q.pop();
        for(auto v : adj[u]){
            if(lvl[v] == -1) {
                lvl[v] = lvl[u] + 1;
                q.push(v);
            }
        }
    }
    return res;
}
 
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(lvl, -1, sizeof(lvl));
 
    int n, m;   cin >> n;
    m = n - 1;
    for(int i = 1; i <= m; i++){
        int u, v;   cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    int y = bfs(1);
 
    memset(lvl, -1, sizeof(lvl));
    int ans = bfs(y);
 
 
    cout << lvl[ans] - 1 << endl;
}