#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, one = 0, two = 0;  cin >> n;
    for(int i = 0; i < n; i++) {
        int a;  cin >> a;
        if(a == 1) one ++;
        else two ++;
    }
    if(two) cout << 2 << ' ';
    if(one) cout << 1 << ' ';

    for(int i = 1; i < two; i++) cout << 2 << ' ';
    for(int i = 1; i < one; i++) cout << 1 << ' ';
    cout << '\n';

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}