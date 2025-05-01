#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);

    for(int &i : arr) cin >> i;

    int  l = 0, r = n - 1, ans = 0;
    while(r - l > 0){
        ans = __gcd(ans, (abs(arr[l] - arr[r])));
        l++, r--;
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