#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;

        int ans = n + 2 * (n/2) + 2 * (n/3);

        cout << ans << endl;
    }
}