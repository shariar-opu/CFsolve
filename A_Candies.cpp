#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    int n,m;    cin >> n >> m;
    int mod = n%m;
    vector<int> v;
    for(int i = 0; i<m; i++){
        if(mod){
            v.push_back(n/m+1);
            mod--;
        }
        else v.push_back(n/m);
    }
    sort(v.begin(), v.end());

    for(int i = 0; i < m; i++){
        cout << v[i] << " ";
    }
}