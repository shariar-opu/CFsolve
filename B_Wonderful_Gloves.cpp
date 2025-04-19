#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int tc){
    int n, k;   cin >> n >> k;
    vector<int> l(n), r(n);
    for(int &i : l) cin >> i;
    for(int &i : r) cin >> i;
    
    int mx = 0;
    vector<int> need;
    for(int i = 0; i < n; i++){
        if(l[i] > r[i]){
            mx += l[i];
            need.push_back(r[i]);
        }
        else{
            mx += r[i];
            need.push_back(l[i]);
        }
    }

    sort(need.rbegin(), need.rend());
    for(int i = 0; i < k - 1; i++){
        mx += need[i];
    }
    cout << mx + 1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}