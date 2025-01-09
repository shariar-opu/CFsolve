#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    vector<int>arr(n);
    for(int &i : arr) cin >> i;
    sort(arr.begin(), arr.end());

    int q;  cin >> q;
    while(q--){
        long long a;  cin >> a;
        int ans = upper_bound(arr.begin(), arr.end(), a) - arr.begin();
        cout << ans << endl;
    }
}