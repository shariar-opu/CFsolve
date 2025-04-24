#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    string s;   cin >> s;
    int one = 0, cnt = 0;
    for(char &u : s) if(u == '1') one++;
    
    for(char &u : s){
        if(u == '0') cnt += 1 + one;
        else cnt += (one - 1);
    }
    cout << cnt << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}