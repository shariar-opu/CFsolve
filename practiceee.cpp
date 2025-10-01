#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i: arr) cin >> i;

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++) ans = max(ans, __gcd(arr[i], arr[j]));
    }

    cout << ans << '\n';

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}