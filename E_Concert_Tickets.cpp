#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int n, m;   cin >> n >> m;

    multiset<ll> price_tic;
    for(int i = 0; i < n; i++){
        ll a;   cin >> a;
        price_tic.insert(a);
    }

    for(int i = 0; i < m; i++){
        ll cus_price;   cin >> cus_price;

        auto it = price_tic.upper_bound(cus_price);

        if(it == price_tic.begin()){
            cout << -1 << endl;
        }
        else{
            --it;
            cout << *it << endl;
            price_tic.erase(it);
        }
    }
}