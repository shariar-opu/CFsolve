#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    vector<long long> arr;
    for(int i = 0; i < n; i++){
        long long a;  cin >> a;
        arr.push_back(a);
    }

    sort(arr.begin(), arr.end());

    long long ans = 0;
    while(1){
        long long tmp = arr[0] + arr[1];
        arr[1] = tmp;
        arr.erase(arr.begin());
        if(arr.empty()) break;
        ans += tmp;
        sort(arr.begin(), arr.end());
    }

    cout << ans << endl;
}