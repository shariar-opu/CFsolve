/*
Q: x^2 + 5x = 20, what is value of x?
Teachnique : fractional bisection
*/
#include<bits/stdc++.h>
using namespace std;
int n;
bool calc(double x){
    double res = x * x + 6 * x;
    return res < -7;
}

void solve(int tc){
    // cin >> n;
    double l = -2, r = -1;
    while(r - l > 1e-6){
        double mid = (l + r) / 2;
        if(calc(mid)) l = mid;
        else r = mid;
    }
    cout << l << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}