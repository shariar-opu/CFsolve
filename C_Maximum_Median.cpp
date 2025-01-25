#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, k;
vector<ll>arr;
bool calc(int val){
    ll res = 0, j = (n+1)/2;
    for(int i = j; i < n; i++){
        res += (val - arr[i]);
        if(res > k) return false;
    }
    return true;
}

int bs(){
    ll left  = 1, right = 1e9;
    while(right - left > 0){
        ll mid = left + (right - left) / 2;

        if(calc(mid)) left = mid;
        else right = mid - 1;
    }
    if(calc(right)) return right;
    return left;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n >> k;
    arr.resize(n);
    for(ll &i : arr) cin >> i;
    sort(arr.begin(), arr.end());

    cout << bs() << endl;
}