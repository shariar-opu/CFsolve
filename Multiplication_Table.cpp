#include<bits/stdc++.h>
using namespace std;

long long n, median;
bool calc(long long x){
    long long res = 0;
    for(long long i = 1; i <= n; i++){
        res = res + min(x / i, n);
    }
    return res >= median;
}

void solve(int tc){
    cin >> n;
    median = ((n * n) + 1) / 2;

    long long l = 1, r = n * n, ans = -1;
    while(r - l >= 0){
        long long mid = (l + r) / 2;
        if(calc(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}