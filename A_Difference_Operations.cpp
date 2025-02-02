#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(int tc) {
    int n;  cin >> n;
    vector<ll> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    ll val = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] % val){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve(t);
    }

    return 0;
}