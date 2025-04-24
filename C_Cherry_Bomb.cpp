#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll

void solve(int tc){
    int n, k;   cin >> n >> k;
    vector<int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    int pre = -1, neg = 0;
    for(int i = 0; i < n; i++){
        if(b[i] != -1){
            if(pre == -1){
                pre = a[i] + b[i];
            }
            else {
                int cur = a[i] + b[i];
                if(pre != cur){
                    cout << 0 << endl;
                    return;
                }
            }
        }
        else neg++;
    }

    if(neg < n){
        for(int i = 0; i < n; i++){
            if(b[i] == -1){
                int cur = pre - a[i];
                if(cur < 0 || cur > k){
                    cout << 0 << endl;
                    return;
                }
            }
        }
        cout << 1 << endl;
    }
    else{
        int mx = 0;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            mx = max(mx, a[i]);
            mn = min(mn, a[i] + k);
        }
        if(mx > mn) cout << 0 << endl;
        else cout << mn - mx + 1 << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}