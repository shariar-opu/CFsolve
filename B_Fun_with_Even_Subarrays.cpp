#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    reverse(arr.begin(), arr.end());

    int win = 1, op = 0;
    for(int i = 1; i < n; i++){
        if(arr[0] == arr[i]) win++;
        else {
            i += (win - 1);
            op++;
            win += win;
        }
    }

    cout << op << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    while(t--) solve();
}