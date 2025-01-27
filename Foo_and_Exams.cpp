#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll a, b, c, d, k;
bool calc(ll val){
    ll res = (a * val * val * val) + (b * val * val) + ( c * val) + d;
    return res <= k;
}

ll bs(){
    ll left = 0, right = 9e5, ans;
    while(right - left >= 0){
        ll mid = (right + left) / 2;

        if(calc(mid)) {
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }
    return ans;
}

void solve(){
    cin >> a >> b >> c >> d >> k ;

    cout << bs() << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;  cin >> t;
    while(t--) solve();
    
}