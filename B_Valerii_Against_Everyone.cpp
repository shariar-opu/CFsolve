#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        map<int,int>cnt;
        
        int n;  cin >> n;
        vector<int>arr(n);
        for(int &i : arr){
            cin >> i;
            cnt[i]++;
        }

        bool ok = 0;
        for(auto i : cnt){
            if(i.second > 1){
                ok = 1;
                break;
            }
        }

        ok?cout<<"YES\n":cout<<"NO\n";
    }
}