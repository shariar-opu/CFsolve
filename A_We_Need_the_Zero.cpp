#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        int sum = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            sum ^= arr[i];
        }
        if(n%2)cout << sum << endl;
        else cout << ((sum==0)? 0 :-1 )<< endl;
    }
}