#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n;  cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int cnt = 0, tmp[n] = {};
    for(int i = n - 2; i >= 0; --i){
        if(arr[i + 1] - arr[i] >= 2) cnt ++;
        else cnt = 0;

        tmp[i] = cnt;
    }

    for(int i = 0; i < n; i++){
        if(tmp[i]) cout << tmp[i] + 1 << endl;
        else cout << 0 << endl;
    }
}