#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        string s;   cin >> s;
        string a = "it";
        if(s.find(a) != string::npos)cout << "YES\n";
        else cout << "NO\n";
    }
}