#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    auto check = [&](int a){
        int l = 0, r = n-1;
        while(r - l > 0){
            if(arr[l] == a) l++;
            else if(arr[r] == a) r--;
            else{
                if(arr[l] != arr[r]) return 0;
                l++, r--;
            }
        }
        return 1;
    };

    int a, b, ans = -1, l = 0, r = n-1;
    while(r - l> 0){
        if(arr[l] != arr[r]){
            a = arr[l], b = arr[r];
            ans = 0;
            break;
        }
        l ++, r --;
    }
    
    if(ans == -1) cout << "YES\n";
    else {
        if(check(a) || check(b)) cout << "YES\n";
        else cout << "NO\n";
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        solve();
    }
    return 0;
} 