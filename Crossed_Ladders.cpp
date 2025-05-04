#include<bits/stdc++.h>
using namespace std;
#define ll long long

const double eps = 1e-11;
double x, y, c;


bool calc(double d){
    double lx = sqrt(x * x - d * d);
    double ly = sqrt(y * y - d * d);

    double tot_dis = (lx * ly) / (lx + ly);
    return tot_dis <= c;
}

void solve(int tc){
    cin >> x >> y >> c;

    double l = 0, r = min(x, y);
    while(r - l > eps){
        double mid = (r + l) / 2;
        if(calc(mid)) r = mid;
        else l = mid;
    }

    cout << "Case " << tc << ": " << fixed << setprecision(10) << l << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}