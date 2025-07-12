#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    ll n;   cin >> n;
    ll x = sqrtl(n);
    while(x * x < n) ++x;
    while(x * x > n) --x;
    assert(x * x == n);

    int ans = 0;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            ans = max(ans, i);
            while(x % i == 0) {
                x /= i;
            }
        }
    }
    if(x > 1) ans = max(ans, (int) x);
    cout << ans << endl;

    //time complexity: O(sqrt(sqrt(n)))
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}