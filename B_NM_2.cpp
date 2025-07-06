#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const ll inf = 1e18;

void solve(int tc){
    vector<ll>uglyNum;
    ll p2 = 1;
    for(int i = 1; p2 <= inf; p2 *= 2){
        ll p3 = 1;
        for(int y = 1; p2 * p3 <= inf; p3 *= 3){
            ll p5 = 1;
            for(int z = 1; p2 * p3 * p5 <= inf; p5 *= 5){
                uglyNum.push_back(p2 * p3 * p5);
            }
        }
    }
    sort(uglyNum.begin(), uglyNum.end());
    cout << "The 1500'th ugly number is " << uglyNum[1500 - 1] << ".\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}