#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

int gcd(int a, int b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a < b) swap(a, b);
    return gcd(a % b, b);
}

ll lcm(int a, int b){
    return (1ll * a * b) / gcd(a, b);
}

void solve(int tc){
    int a, b;   cin >> a >> b;

    cout << gcd(a, b) << " " << lcm(a, b) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}