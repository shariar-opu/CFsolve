#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    vector<int> hori(n), ver(m);
    for(int &i: hori) cin >> i;
    for(int &i: ver) cin >> i;

    cout << n + m << endl;


    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}