#include<bits/stdc++.h>
using namespace std;

#define int long long

void solve(int tc){
    int n, k, x;
    cin >> n >> k >> x;

    vector<int>arr(n);
    for(int &i : arr) cin >> i;

    vector<int>suf(n + 1);
    suf[n - 1] = arr[n - 1];
    for(int i = n - 2; i >= 0; --i){
        suf[i] = suf[i + 1] + arr[i];
    }

    int s = suf[0] * k;
    
    if (s < x) {
        cout << 0 << endl;
        return;
    }

    int mark = -1, need = x % suf[0];
    if(!need){
        cout << (k - (x / suf[0])) * n + 1 << endl;
        return;
    }
    for(int i = n - 1; i >= 0; --i){
        if(need <= suf[i]) {
            mark = n - i;
            break;
        }
    }


    int gg = (x / suf[0]) * n;
    gg += mark;

    cout << (n * k) - (gg - 1) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}