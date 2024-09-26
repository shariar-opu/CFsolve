#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin>>n;
        string s;   cin>>s;
        string b = s;
        reverse(b.begin(),b.end());
        cout << min(s,b+s) << "\n";
    }
}