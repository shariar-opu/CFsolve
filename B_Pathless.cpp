#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    int n, s, sum = 0;   cin >> n >> s;
    int cnt[3] = {};

    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        sum += a;
        cnt[a]++;
    }

    if(sum == s) cout << -1 << endl;
    else if(sum > s) {
        for(int i = 0; i < cnt[0]; i++) cout << 0 << " ";
        for(int i = 0; i < cnt[2]; i++) cout << 2 << " ";
        for(int i = 0; i < cnt[1] - 1; i++) cout << 1 << " ";
        cout << 1 << endl;

    }
    else{
        if(abs(sum - s) == 1){
            for(int i = 0; i < cnt[0]; i++) cout << 0 << " ";
            for(int i = 0; i < cnt[2]; i++) cout << 2 << " ";
            for(int i = 0; i < cnt[1] - 1; i++) cout << 1 << " ";
            cout << 1 << endl;
        }
        else cout << -1 << endl;
    }

    //time complexity: O(tc * n)
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}