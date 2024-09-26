#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin>>n;
        vector<int>arr(n);
        int cnt = 0, ans = 0;
        for(int &i : arr){
            cin >> i;
            if(i == 0)cnt++;
            else ans = max(ans,cnt),cnt = 0;
        }
        cout<<max(ans,cnt)<<endl;
    }
}