#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    int a, b;   cin >> a >> b;
    ll ans = 0;
    for(int i = a; i <= b; i++){
        ll eu = i, need = i;
        for(ll j = 2; j * j <= i; j++){
            if(need % j == 0){
                while(need % j == 0){
                    need /= j;
                }
                eu *= ((j - 1) / j);
            }
        }
        if(need > 1) eu *= ((need - 1) / need);
        ans += eu;
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}