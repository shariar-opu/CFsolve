#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        map<int ,int>mp;
        int n;  cin >> n;
        vector<int>arr(n);
        for(int &i : arr){
            cin >> i;
            mp[i]++;
        }
        
        arr.resize(unique(arr.begin(),arr.end())-arr.begin());
        int cnt = 0;
        if(mp.size()==1)cout<<"Yes\n";
        else if(mp.size()==2){
            cnt = abs(mp[arr[0]]-mp[arr[1]]);
            if(cnt <= 1)cout<<"Yes\n";
            else cout<<"No\n";
        }
        else cout<<"No\n";
    }
}