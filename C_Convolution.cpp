#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n, m;   cin >> n >> m;
    vector<int> a(n),b(m);
    int sum_a = 0, sum_b = 0;
    for(int i = 0; i< n; i++){
        cin >>a[i];
        sum_a += a[i];
    }
    for(int i =0; i <m; i++){
        cin >> b[i];
        sum_b += b[i];
    }
    cout << sum_a * sum_b << "\n";
}