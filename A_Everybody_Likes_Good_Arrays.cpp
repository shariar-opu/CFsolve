#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin>>t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        int odd = 0, evn = 0;
        vector<int>v;
        for(int &i : arr){
            cin >> i;
            if(i%2==0){
                evn++;
                if(odd>=2)v.push_back(odd);
                odd=0;
            }
            else{
                odd++;
                if(evn>=2)v.push_back(evn);
                evn=0;
            }
        }
        if(odd>0)v.push_back(odd);
        if(evn>0)v.push_back(evn);
        int ans = 0;
        for(auto i : v){
            ans+=(i-1);
        }
        cout << ans << "\n";
    }
}