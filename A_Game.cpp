#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,k1,k2;    cin >> n1 >> n2 >> k1 >> k2;
    if((k1+k2 )& 1) cout << "Second\n";
    else cout << "First\n";
}