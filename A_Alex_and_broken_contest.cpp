#include<bits/stdc++.h>
using namespace std;
int32_t main (){
    string s;   cin >> s;
    string s1 = "Danil", s2 = "Olya", s3 = "Slava", s4 = "Ann", s5 = "Nikita", need ="";

    int cnt = 0;
    for(int i = 0; i < s.size(); i++){
        need += s[i];
        if(s1 == need || s2 == need || s3 == need || s4 == need || s5 == need){
            cnt ++;
            need = "";
        }
        else if(s[i] >= 'A' && s[i] <= 'Z'){
            need = "";
            need += s[i];
        }
    }
    if(cnt == 1) cout << "YES" << "\n";
    else cout << "NO" << "\n";
}