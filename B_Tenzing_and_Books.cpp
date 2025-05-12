#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, k;   cin >> n >> k;
    vector<int> a(n), b(n), c(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;
    for(int &i : c) cin >> i;

    int pre = 0;
    for(int i = 0; i < n; i++){
        if((k | a[i]) != k) break;
        pre |= a[i];
    }
    for(int i = 0; i < n; i++){
        if((k | b[i]) != k) break;
        pre |= b[i];
    } 
    for(int i = 0; i < n; i++){
       if((k | c[i]) != k) break;
        pre |= c[i];
    }

    if(pre == k) cout << "YES\n";
    else cout << "NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}