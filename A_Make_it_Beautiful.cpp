#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++)cin >> arr[i];
        sort(arr.rbegin(),arr.rend());
        if(arr[0] != arr[n-1]){
            cout << "YES\n";
            cout<<arr[n-1]<<" ";
            for(int i = 0; i < n-1; i++)cout<<arr[i]<<" ";
            cout<<"\n";
        }
        else cout <<"NO\n";
    } 
}