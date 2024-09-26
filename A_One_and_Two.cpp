#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        vector<int>a(n);
        map<int,int>mp;
        for(int &i : a)cin >> i,mp[i]++;
        if(mp[2]%2 == 0){
            int cnt = 0;
            for(int i = 0; i < n; i++){
                if(a[i]==2)cnt++;
                if(cnt==mp[2]/2){
                    cout<< i+1 << "\n";
                    break;
                }
            }
        }
        else cout<< -1 << "\n";
    }
}