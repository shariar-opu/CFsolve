#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 2e5;
ll n, k;
ll arr[inf + 7];
bool calc(ll val){
    ll res = 0, j = (n+1)/2;
    for(int i = j-1; i < n; i++){
        res += (val - arr[i]);
        if(res > k) return false;
    }
    return true;
}

int bs(){
    ll left = 0, right = 1e15, ans;
    while(right - left >= 0){
        ll mid = left + (right - left) / 2;

        if(calc(mid)) {
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> n >> k;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);

    cout << bs() << endl;
}