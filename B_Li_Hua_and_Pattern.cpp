#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, k;   cin >> n >> k;
    int arr[n + 1][n + 1];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) cin >> arr[i][j];
    }

    if(n == 1){
        cout << "YES\n";
        return;
    }

    int cnt = 0;
    for(int i = 0; i < (n + 1) / 2; i++){
        for(int j = 0; j < n; j++){
            if(arr[i][j] != arr[n - 1 - i][n - 1 - j]) cnt++;
            if(n & 1 && i + 1 == (n + 1) / 2 && j + 1 == (n + 1) / 2) break;
        }
    }

    if(k < cnt){
        cout << "NO\n";
    }
    else{
        if((k - cnt) & 1){
            if(n & 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else cout << "YES\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}