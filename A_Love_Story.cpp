#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        string s, cf = "codeforces";   cin >> s;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != cf[i]) cnt++;
        }
        cout << cnt << "\n";
    }
}
