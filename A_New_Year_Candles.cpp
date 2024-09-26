#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int a,b;    cin >> a >> b;
    int total = a;
    int ans = 0;
    while(total >= b){
        ans = total / b;
        total = ans;
    }
    cout << ans + a << endl;
}