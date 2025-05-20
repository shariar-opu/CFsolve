#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 5e5;
int par[inf + 7], sz[inf + 7];

void make(int v){
    par[v] = v;
    sz[v] = 1;
}

int find(int v){
    if(par[v] == v) return v;
    return par[v] = find(par[v]);
}

void Union(int a, int b){
    a = find(a);
    b = find(b);

    if(a != b){
        if(sz[a] < sz[b]) swap(a, b);
        par[b] = a;
        sz[a] += sz[b];
    }
}

void solve(int tc){
    for(int i = 0; i <= inf; i++){
        sz[i] = par[i] = 0;
    }

    int n, q;   cin >> n >> q;

    for(int i = 1; i <= n; i++) make(i);

    while(q--){
        int a;  cin >> a;
        vector<int> arr(a);
        for(int &i : arr) cin >> i;

        for(int i = 1; i < a; i++){
            Union(arr[i - 1], arr[i]);
        }
    }
    for(int i = 1; i <= n; i++) {
        cout << sz[find(i)] << " ";
    }
    cout << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}