#include<bits/stdc++.h>
using namespace std;
int32_t main (){
    int n;  cin >> n;
    string s;   cin >> s;

    bool ok = 1;
    for( int i = 0; i < n; i++ ){
        if(s[i] == s[i+1] && i != n-1)ok = 0;
    }
    cout << (ok? "Yes\n" : "No\n");
}