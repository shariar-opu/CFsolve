#include<bits/stdc++.h>
using namespace std;
void solve(int tc){
    int n, sum = 0;  cin >> n;
    vector<int> pre(n+1);
    for(int i = 1; i <= n; i++){
        int a;  cin >> a;
        sum += a;
        pre[i] = sum;
    }
    int ans[pre[n]+1], j = 1;
    for(int i = 1; i <= pre[n]; i++){
        if(i > pre[j]) j++;
        ans[i] = j;
    }
    int q;  cin >> q;
    while(q--){
        int a;  cin >> a;
        cout << ans[a] << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve(t);
}