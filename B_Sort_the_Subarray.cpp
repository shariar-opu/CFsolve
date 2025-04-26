#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    int pre = -1;
    for(int i = 0; i < n; i ++){
        if(a[i] != b[i]) {
            pre = i;
            break;
        }
    }
    int suf = -1;
    for(int i = n - 1; i >= 0; --i){
        if(a[i] != b[i]){
            suf = i;
            break;
        }
    }

    for(int i = pre - 1; i >= 0; --i){
        if(b[pre] >= b[i]) pre = i;
        else break;
    }

    for(int i = suf + 1; i < n; i++){
        if(b[suf] <= b[i]) suf = i;
        else break;
    }

    cout << pre + 1 << " " << suf + 1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}