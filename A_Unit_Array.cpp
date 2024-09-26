#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        int cnt = 0;
        for(int &i : arr){
            cin >> i;
            if(i<0)cnt++;
        }
        int x = n/2;
        if(x&1)x--;
        if(cnt > x) cout << cnt-x<<endl;
        else if(cnt & 1) cout << 1 << endl;
        else cout << 0 << endl;
    }
}