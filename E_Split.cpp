#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, k;   cin >> n >> k;
    map<int, int> cnt;
    vector<int> arr(n);
    for(int &i: arr) cin >> i, cnt[i]++;

    for(auto u: cnt) {
        if(u.second % k != 0){
            cout << 0 << '\n';
            return;
        }
    }

    int l = 0, r = k;

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}