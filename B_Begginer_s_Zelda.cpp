#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        map<int,int>mp;
        int n;  cin >> n;
        n--;
        while(n--){
            int u,v;    cin >>u >> v;
            mp[u]++, mp[v]++;
        }
        int cnt=0;
        for(auto i : mp){
            if(i.second == 1) cnt++;
        }
        cout << (cnt+1)/2 << "\n";
    }
}