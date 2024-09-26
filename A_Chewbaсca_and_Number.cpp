#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;  cin >> n;
    vector<int>v;
    while(n != 0){
        int r = n % 10;
        if(r > 4){
            if(r == 9 && n/10 == 0) v.push_back(9);
            else v.push_back(9-r);
        }
        else v.push_back(r);
        n /= 10;
    }
    for(int i = v.size()-1; i >= 0; --i) cout << v[i];
}