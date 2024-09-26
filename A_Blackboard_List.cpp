#include<bits/stdc++.h>
#define op() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int32_t main(){
    op();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        for(int i = 0; i<n;i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        if(arr[0]<0) cout << arr[0] << "\n";
        else cout << arr[n-1] << "\n";
    }
}