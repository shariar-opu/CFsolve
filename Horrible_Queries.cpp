#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 1e5;
ll arr[inf + 7], n;

void addVal(ll l, ll r, ll val){
    arr[l] += val;
    arr[r+1] -= val;
}

void res(ll l, ll r){
    ll pre[n + 7] = {}, sum = 0;
    for(int i = 1; i <= n; i++){
        pre[i] = pre[i - 1] + arr[i];
    }

    for(int i = 1; i <= n; i++){
        sum += pre[i];
        pre[i] = sum;
    }

    cout << pre[r] - pre[l - 1] << endl;
}

void solve(){
    memset(arr, 0, sizeof(arr));
    int q;  cin >> n >> q;

    while(q--){
        int op; cin >> op;
        if(op == 0) {
            ll l, r, val;  cin >> l >> r >> val;
            addVal(l, r, val);
        }
        else {
            ll l, r;   cin >> l >> r;
            res(l, r);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--) solve();
} 