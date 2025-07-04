#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll pw(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

void solve(int tc){
    int n;  cin >> n;
    int divSum = 1, tmp = n;
    for(int i = 2; i * i <= n; i++){
        int res = 0;
        if(n % i == 0){
            while(n % i == 0){
                res ++;
                n /= i;
            }
        }
        divSum *= floor((pw(i, res + 1) - 1) / (i - 1));
    }

    if(n > 1) divSum *= floor((pw(n, 2) - 1) / (n - 1));

    cout << divSum - tmp << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}