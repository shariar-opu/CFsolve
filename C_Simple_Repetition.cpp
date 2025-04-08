#include<bits/stdc++.h>
using namespace std;
#define int long long

bool p(int n){
    if(n == 1 || n == 0) return false;
    if(n <= 3) return true;
    if(n % 2 == 0 || n % 3 == 0) return false;

    for(int i = 5; i * i <= n; i += 2){
        if(n % i == 0) return false;
    }

    return true;
}

void solve(int tc){
    int x, k;   cin >> x >> k; 
    
    if(k == 1){
        if(p(x)) cout << "YES\n";
        else cout << "NO\n";
    }
    else if(k == 2){
        if(x == 1) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}