#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 2e5;
int par[inf + 7], sz[inf + 7];

void make(int v){
    par[v] = v;
    sz[v] = 1;
}

int find(int v){
    if(par[v] == v) return v;
    return par[v] = find(par[v]);
}

void Union(int u, int v){
    u = find(u);
    v = find(v);

    if(u != v){
        if(sz[u] < sz[v]) swap(u, v);
        par[v] = u;
        sz[u] += sz[v];
    }
}

void solve(int tc){
    int n, q;   cin >> n >> q;

    for(int i = 0; i < n; i++) make(i);

    while(q--){
        int x, u, v;    cin >> x >> u >> v;
        if(x){
            u = find(u);
            v = find(v);
            if(u == v){
                cout << 1 << endl;
            }
            else cout << 0 << endl;
        }
        else{
            Union(u, v);
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