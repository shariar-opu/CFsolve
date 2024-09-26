#include<bits/stdc++.h>
#define int  long long
using namespace std;
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >>n;
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int sum = 0, cnt = 0;
        for(auto i : arr){
            if(i > sum){
                cnt ++;
                sum += i;
            }
        }
        cout << cnt << " " << sum << "\n";
    }
}