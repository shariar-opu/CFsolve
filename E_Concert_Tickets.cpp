#include<bits/stdc++.h>
using namespace std;

const int inf = 2e5;
int n, m; 
vector<int> price_tic, cus_price;
bool  mark[inf + 7];

bool check(int x){
    for(int i = 0; i < )
}

int bs(){
    long long l = 0, r = 1e9, ans = -1;
    while(r - l > 0){
        long long mid = (r + l) / 2;
        if(check(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m;
    price_tic.resize(n), cus_price.resize(m);

    for(int &i : price_tic) cin >> i;
    for(int &i : cus_price) cin >> i;

    sort(price_tic.begin(), price_tic.end());

    cout << bs() << endl;
}