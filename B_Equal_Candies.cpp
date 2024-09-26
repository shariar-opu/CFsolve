#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<long long>arr(n);
        for(int i = 0; i  < n; i++){
            cin  >> arr[i];
        }
        sort(arr.begin(),arr.end());
        long long dif = 0;
        for(int i = 1; i < n; i++){
            dif+= arr[i]-arr[0];
        }
        cout<<dif<<"\n";
    }
}