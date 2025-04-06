#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
    int n;  cin >> n;
    if(n == 1) cout << 0 << endl;
    else if(n == 2) cout << 1 << endl;
    else if(n == 3) cout << 2 << endl;
    else{
        if(n & 1) cout << 3 << endl;
        else cout << 2 << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}