#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        for(int &i : arr) cin >> i;
        sort(arr.rbegin(),arr.rend());

        for(int &i:arr)cout<<i<<" ";
        cout<<"\n";
    }
}