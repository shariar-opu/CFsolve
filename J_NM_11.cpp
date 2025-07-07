#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    ll n;   cin >> n;
    int a, b, c;    cin >> a >> b >> c;

    vector<int> divs;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0){
            divs.push_back(i);
            if(i != n / i) divs.push_back(n / i);
        }
    }

    int ans = 0;
    for(auto x: divs){
        if(x <= a){
            for(auto y: divs){
                if(y <= b){
                    if(n % (1ll * x * y) == 0){
                        ll z = n / (x * y);
                        if(z <= c){
                            ans++;
                        }
                    }
                }
            }
        }
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