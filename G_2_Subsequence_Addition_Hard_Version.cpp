#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    if(arr[0] > 1){
        cout << "NO\n";
        return;
    }

    int64_t k = 1, sum = 1;
    while(k < n){
        if(arr[k] <= sum){
            sum += arr[k];
            k++;
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}