#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n,f,a,b;   cin >> n >>f>> a>>b;
        int arr[n];
        for(int i = 0; i < n; i++) cin >>arr[i];
        int mn = INT_MAX;
        bool ok = 1;
        for(int i = 0; i< n; i++){
            if(i == 0){
                if(arr[i] * a < b) f -= (arr[i]*a);
                else f -= b;
            }
            else{
                mn = min((arr[i] - arr[i-1])*a, b);
                f -= mn;
            }
            if(f <= 0 && i <= n-1) {
                ok = 0;
                break;
            }
        }
        if(ok) cout << "YES\n";
        else cout << "NO\n";
    }
}