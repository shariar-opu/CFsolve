#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int a, b, c;    cin >> a >> b >> c;
        int dif1 = b - a, dif2 = b - c;
        if((a == b && c == 1) || (b == c && a == 1) || a == b && c == b) cout << "YES\n";
        else if((a + (2 * dif1)) % c == 0 || (c + (2 * dif2)) % a == 0) cout << "YES\n";
        else if(b >= a && b <= c && (c - a) % b == 0 ) cout << "YES\n";
        else cout << "NO\n" << endl;
    }
}