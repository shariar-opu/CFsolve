#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n ,k;  cin >> n >> k;
        if(n%k){
            cout << 1 << endl;
            cout << n << endl;
        }
        else{
            cout << 2 << endl;
            if(((n/k)+1) % k) cout << (n/k) + 1 << " " << n-(n/k)-1<< endl;
            else cout << (n/k) + 2 << " " << n-(n/k)-2<< endl;
        }
    }
}