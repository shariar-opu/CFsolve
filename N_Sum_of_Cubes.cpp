#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll cube(ll x){
    return x * x * x;
}

bool calc(ll mid, ll target){
    for(int i = 1; i <= mid; i++){
        if(cube(i) + cube(mid) == target) return 1;
    }
    return 0;
}

bool bs(ll x){
    ll l = 1, r = 10000;
    while(r - l > 0){
        ll mid = (l+r)/2;
        if(cube(mid) > x) r = mid - 1;
        else if(calc(mid, x)) return 1;
        else l = mid;
    }
    if(calc(r, x)) return 1;
    return 0;
}

void solve(int tc){
    ll x;  cin >> x;
    bs(x)? cout << "YES\n" : cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    for(int tc = 1; tc <= t; tc++) solve(tc);
    return 0;
}