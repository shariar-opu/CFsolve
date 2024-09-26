#include<bits/stdc++.h>
using namespace std;
int fact(long long a){
    if(a == 1 || a==0)return 1;
    return a*fact(a-1);
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,b;    cin >> a >> b;
    if(a > 12) cout << fact(b) << endl;
    else if(b>12) cout << fact(a) << endl;
    else cout << __gcd(fact(a),fact(b))<< endl;
}