#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n,m;
    cin >> n >> m;
    if(n == 1 ) cout << m-1 << "\n";
    else if(m == 1) cout << n - 1 << "\n";
    else{
        cout << (m-1)*n << "\n";
    }
}