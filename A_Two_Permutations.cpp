#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n,a,b;  cin >> n >> a>> b;
        if(n==a && n==b)cout << "Yes\n";
        else if(n-(a+b)>=2)cout << "Yes\n";
        else cout << "No\n";
    }
}