#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    ll n, k;   cin >> n >> k;
    
    if(k % (n-1)) cout << k/(n-1) * n + k % (n-1) << endl;
    else cout << k/(n-1) * n - 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
    return 0;
}