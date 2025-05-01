#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<int> arr;
int n, k;

bool calc(ll x){
    ll res = 0, sum = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > x) return false;
        if(sum + arr[i] > x){
            res++;
            sum = 0;
        }
        sum += arr[i];
    }
    if(sum) res++;

    return res <= k;
}

void solve(int tc){
    cin >> n >> k;
    arr.resize(n);
    ll sum = 0;
    for(int &i : arr) {
        cin >> i;
        sum += i;
    }

    ll l = 0, r = sum, ans = 0;
    while(r - l >= 0){
        ll mid = (r + l) / 2;
        if(calc(mid)){
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}