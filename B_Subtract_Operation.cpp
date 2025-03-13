#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;  cin >> n >> k;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    int l = 0, r = 1;
    while(r < n){
        // cout << arr[r] << " " << arr[l] << " " << arr[r] - arr[l] << endl;
        if(arr[r] - arr[l] == k){
            cout << "YES\n";
            return;
        }
        else if(arr[r] - arr[l] > k) l++;
        else r++;
    }

    cout << "NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    while(t--) solve();
}