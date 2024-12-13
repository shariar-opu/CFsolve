#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<ll>arr;
bool mono(ll dist){
    ll div = 0, notdiv = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] % dist){
            notdiv++;
            div = 0;
        }
        else {
            div++;
            notdiv = 0;
        }
        if(notdiv == 2 || div == 2) return 0;
    }
    return 1;
}
int bs(){
    ll l = 2, r = 1e18;
    while(r-l > 1){
        ll mid = (r+l)/2;
        if(mono(mid)) l = mid;
        else r = mid - 1;
    }
    if(mono(r)) return r;
    if(mono(l)) return l;
    return 0;
}
void solve(int tc){
    cin >> n;
    arr.resize(n);
    for(ll &i : arr) cin >> i;
    if(n == 2){
        if(arr[0] == arr[1]) cout << 0 << endl;
        else cout << max(arr[0], arr[1]) << endl;
        return;
    }
    cout << bs() << endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1; 
    cin >> t;
    while(t--)solve(t);
}