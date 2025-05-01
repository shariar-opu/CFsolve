#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;

void solve(int tc){
    int n;  cin >> n;
    vector<int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    ll ans = 1;
    for(int i = 0; i < n; i++){
        int l = i, r = n - 1, cnt = 0;
        while(r - l >= 0){
            int mid = (r + l) / 2;
            if(a[i] <= b[mid]) r = mid - 1;
            else {
                l = mid + 1;
                cnt = mid - i + 1;
            }
        }
        if(!cnt) {
            cout << 0 << endl;
            return;
        }
        ans = (ans * cnt) % mod;
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