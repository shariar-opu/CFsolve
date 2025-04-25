#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = LLONG_MAX;

void solve(int tc){
    int n, m;   cin >> n >> m;
    vector<ll> a(n), b(m);
    for(ll &i : a) cin >> i;
    for(ll &i : b) cin >> i;

    vector<ll> pre(m), suf(m);
    for(int i = 0; i < m; i++){
        pre[i] = inf;
        suf[i] = -inf;
    }
    
    int j = 0;
    for(int i = 0; i < n && j < m; i++){
        if(a[i] >= b[j]){
            pre[j] = i;
            j++;
        }
    }

    j = m - 1;
    for(int i = n - 1; i >= 0 && j >= 0; --i){
        if(a[i] >= b[j]){
            suf[j] = i;
            --j;
        }
    }

    if(pre[m - 1] != inf){
        cout << 0 << endl;
        return;
    }

    ll ans = inf;
    for(int i = 1; i < m - 1; i++){
        if(suf[i + 1] > pre[i - 1]){
            ans = min(ans, b[i]);
        }
    }
    if(suf[1] != -inf){
        ans = min(ans, b[0]);
    }
    if(pre[m - 2] != inf){
        ans = min(ans, b[m - 1]);
    }

    if(ans == inf) cout << -1 << endl;
    else cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}