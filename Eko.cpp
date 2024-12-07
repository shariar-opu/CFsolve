#include<bits/stdc++.h>
using namespace std;
vector<long long> arr(1e6+7);
long long n, val;
bool siyam(int m){
    long long extra = 0;
    for(int i = 0; i < n; i++){
        if(m < arr[i]) extra += (arr[i] - m);
    }
    return (extra >= val);
}

void solve(){
    cin >> n >> val;
    for(int i = 0; i < n; i++) cin >> arr[i];

    long long l = 1, r = 1e9+7;
    while(r - l > 1){
        long long mid = (l+r) / 2, extra = 0;
        if(siyam(mid)) l = mid;
        else r = mid - 1;
    }
    if(siyam(r)) cout << r << endl;
    else cout << l << endl;

}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    solve();
}