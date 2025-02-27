#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin >> n;
    if(n % 4 == 0 || n % 7 == 0 || n % 47 == 0 || n % 74 == 0) cout << "YES\n";
    else{
        while(n > 0){
            int r = n % 10;
            if(r != 4 && r != 7){
                cout << "NO\n";
                return 0;
            }
            n /= 10;
        }
        cout << "YES\n";
    }
}