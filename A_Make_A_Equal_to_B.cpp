#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
    int n;  cin >> n;
    vector<int> a(n), b(n);
    int o1 = 0, o2 = 0;
    for(int &i : a) {
        cin >> i;
        if(i == 1) o1++;
    }
    for(int &i : b) {
        cin >> i;
        if(i == 1) o2++;
    } 

    int ans = 1 + abs(o1 - o2), cnt = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) cnt ++;
    }

    cout << min(ans, cnt) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
} 