#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll a,b,sum =1; cin >> a >> b;

    for(ll i = b; i > b - (b-a); --i) {
        sum = (sum * (i % 10)) % 10;
        if(sum == 0) break;
    }

    cout << sum << endl;
}