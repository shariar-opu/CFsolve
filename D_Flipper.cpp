#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    optimize();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> arr(n);
        int mx = 0, idx;
        for(int i = 0; i < n; i ++){
            cin >>arr[i];
            if(i > 0 && mx < arr[i]){
                mx = arr[i];
                idx = i;
            }
        }
        if(n == 1){
            cout << 1 << '\n';
            continue;
        }
        for(int i = idx; i < n; i++){
            cout << arr[i] << ' ';
        }
        if(idx != n-1){
            idx--;
            cout << arr[idx] <<' ';
        }
        idx--;

        while(idx > 0 && arr[idx] > arr[0]){
            cout << arr[idx] << ' ';
            idx--;
        }

        for(int i = 0; i <= idx; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
    }
}