#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int n;  cin >> n;
    vector<int>a(n),b(n);
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    for(int i=0;i <n;i++)cin >> b[i];
    sort(b.rbegin(),b.rend());
    int cap = b[0]+b[1];
    if(sum <= cap) cout << "YES\n";
    else cout<<"NO\n";
}