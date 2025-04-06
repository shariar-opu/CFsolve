#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n), per(n);
    for(int i = 0; i < n; i ++) {
        cin >> arr[i];
        per[i] = i + 1;
    }

    if(per == arr) cout << 0 << endl;
    else if(arr[0] == 1 || arr[n - 1] == n) cout << 1 << endl;
    else if(arr[0] == n && arr[n - 1] == 1) cout << 3 << endl;
    else cout << 2 << endl; 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}