#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool calc(vector<ll> &arr, ll h, ll findH){
    ll totalHour = 0;
    for(auto i : arr){
        totalHour += (i + findH - 1) / findH; //add ceil value
        if(totalHour > h) return false;
    }
    return true;
}

ll bs(vector<ll> &arr, ll h){
    ll left = 1, right = *max_element(arr.begin(), arr.end());

    while(right - left > 0){
        ll mid = left + (right - left) / 2;
        if(calc(arr, h, mid)) right = mid;
        else left = mid + 1;
    }

    return left;
}

void solve(){
    ll n, h;   cin >> n >> h;
    vector<ll> arr(n);
    for(ll &i : arr) cin >> i;

    cout << bs(arr, h) << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t = 1; 
    cin >> t;
    while(t--) solve();

    return 0;
}