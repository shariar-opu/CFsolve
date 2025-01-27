#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 1e6;
ll n, arr[inf + 7];
bool calc(ll val){
    ll res = val;
    for(int i = 0; i < n; i++){
        res += arr[i];
        if(res <= 0) return false;
    }
    return true;
}

ll bs(){
    ll left = 1, right = 1e15, ans;
    while(right - left >= 0){
        ll mid = (right + left) / 2;

        if(calc(mid)) {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }

    return ans;
}

void solve(int tc){
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];

    cout << "Scenario #" << tc << ": " << bs() << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t;  cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
    
} 