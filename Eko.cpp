#include<bits/stdc++.h>
using namespace std;
long long n, val;
vector<long long>tree;
bool mono(int dist){
    long long extra = 0;
    for(int i = 0; i < n; i++){
        if(tree[i] >= dist) extra += (tree[i] - dist);
    }
    return extra >= val;
}
int bs(){
    int l = 1, r = 1e9;
    while(r - l > 1){
        long long mid = (r + l) / 2;
        if(mono(mid)) l = mid;
        else r = mid - 1;
    }
    if(mono(r)) return r;
    return l;
}
void solve(int tc){
    cin >> n >> val;
    tree.resize(n);
    for(long long &i : tree) cin >> i;
    sort(tree.begin(), tree.end());
    cout << bs() << endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve(t);
}