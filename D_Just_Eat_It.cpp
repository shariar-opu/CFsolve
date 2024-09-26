#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int mxN = 1e5;
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int arr[n];
        int presum[n];
        int suffix[n];
        int cur = 0, mx = INT_MIN, sum = 0;
        bool ok = 1;
        for(int i = 0; i < n; i++ ){
            cin >> arr[i];
        }
        for(int i = 0; i < n; i++){
            if(i == 0) presum[i] = arr[i];
            else presum[i] = presum[i-1] + arr[i];
            if(presum[i] < 1){
                ok = 0;
            } 
        }
        for(int i = n-1; i >= 0; i--){
            if(i == n-1) suffix[i] = arr[i];
            else suffix[i] = arr[i] + suffix[i+1];
            if(suffix[i] < 1) ok = 0;
        }
        ok?cout << "YES\n" : cout << "NO\n";
    }
}