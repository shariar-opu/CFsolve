#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    int z = 0;
    for(int &i : arr){
        cin >> i;
        if(i == 0) z++;
    }

    if(z == n || z == 0){
        cout << "YES\n";
        return;
    }

    for(int i = 1; i < n; i++){
        if(arr[i] == 0 && arr[i - 1] == 0){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}