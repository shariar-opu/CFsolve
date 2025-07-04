#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int inf = 50000, mod = 1e9 + 7;
int factors[inf + 7];

void pf(int n){
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                factors[i]++;
                n /= i;
            }
        }
    }
    if(n > 1) factors[n]++;
}

void solve(int tc){
    int n;  cin >> n;
    for(int i = 0; i <= n; i++) factors[i] = 0;
    for(int i = 0; i <= n; i++) pf(i);

    ll ans = 1;
    for(int i = 2; i <= n; i++){
        ans = (ans * (factors[i] + 1)) % mod;
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