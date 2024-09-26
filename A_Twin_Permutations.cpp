#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        for(int &i : arr){
            cin >> i;
            cout << (n-i)+1 << " ";
        }
        cout <<endl;
    }
}