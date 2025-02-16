#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll n, k, b, s; 
    cin >> n >> k >> b >> s;

    if(!s && !b){
        for( int i = 0; i < n; i++) {
            cout << 0 << " ";
        }
        cout << endl;
        return;
    }

    if(!s && b){
        cout << -1 << endl;
        return;
    }

    if(k * b > s){
        cout << -1 << endl;
        return;
    }

    ll tmp = k * b;
    s -= tmp;
    ll need = (k - 1) * (n - 1);

    if(need < s){
        cout << -1 << endl;
        return;
    }

    vector<ll> ans(n);
    for(int i = 0; i < n - 1; i++){
        ans[i] = s/(n - 1);
    }
    ans[n - 1] = tmp;
    s = s % (n - 1);
    if(s){
        if(s >= k - 1){
            tmp += (k - 1);
            s -= (k - 1);
        }
        for(int i = 0; i < n - 1; i++){
            ans[i]++;
            s--;
            if(!s) break;
        }
    }

    for(auto u : ans) cout << u << " ";
    cout << endl;
}

int main(){
    int t;  cin >> t;
    while(t--) {
        solve();
    }
}