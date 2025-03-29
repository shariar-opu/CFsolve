#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(nullptr);cout.tie(nullptr);
    int n, price;     
    cin >> n >> price;

    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    vector<int> dp(price + 7, 0);
    dp[0] = 1;
    for(auto c : arr) {
        for(int val = 1; val <= price; val++){
            if(val - c >= 0) dp[val] = (dp[val] + dp[val - c]) % mod;
        }
    }

    cout << dp[price] << endl; 
}