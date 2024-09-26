#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>v,arr(n);
        for(int &i : arr)cin>>i;

        bool ok = 0;
        for(int i = 0; i < n; i++){
            int cnt = 0;
            for(int j = 0; j < n; j++){
                if(i!=j && __gcd(arr[i],arr[j]) <= 2){
                    ok = 1;
                    break;
                }
            }
            v.push_back(cnt);
        }
        ok?cout<<"Yes\n" : cout<<"No\n";
    }
}