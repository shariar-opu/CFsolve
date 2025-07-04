#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    int n;
    while(cin >> n){
        int tmp = n;
        if(n == 0) return;
        int uniqe = 0;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                uniqe ++;
                while(n % i == 0) n /= i;
            }
        }
        if(n > 1) uniqe ++;
        cout << tmp << " : " << uniqe << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}