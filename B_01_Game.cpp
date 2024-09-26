#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin>>t;
    while(t--){
        map<char,int>mp;
        string s;   cin>>s;
        for(int i = 0; i < s.size();i++){
            mp[s[i]]++;
        }
        if(mp.size() == 1) cout << "NET\n";
        else{
            if(min(mp['1'],mp['0']) & 1)cout << "DA\n";
            else cout << "NET\n";
        } 
    }
}