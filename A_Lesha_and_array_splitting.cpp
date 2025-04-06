#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
    int n, cnt = 0, sum = 0;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr){
        cin >> i;
        if(!i) cnt++;
        sum += i;
    }

    if(cnt == n) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    if(sum != 0){
        cout << 1 << endl;
        cout << 1 << " " << n << endl;
    }
    else {
        cout << 2 << endl;
        for(int i = 0; i < n; i++){
            if(arr[i]){
                cout << 1 << " " << i + 1 << endl;
                cout << i + 2 << " " << n << endl;
                break;
            }
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}