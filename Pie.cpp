#include<bits/stdc++.h>
using namespace std;
const double pi = 3.1416;
const double inf = 1e-5;
int n, f;
vector<double> pie;

bool mono(double dist){
    int eater = f + 1, portion = 0;
    for(int i = 0; i < n; i++){
        portion += (pie[i] / dist);
    }
    return eater <= portion;
}
double bs(){
    double l = 1, r = 1e9;
    while(r - l > inf){
        double mid = (r+l)/2;
        if(mono(mid)) l = mid;
        else r = mid;
    }
    if(mono(r)) return r;
    return l;
}
void solve(int tc){
    cin >> n >> f;
    pie.resize(n);
    for(int i = 0; i < n; i++){
        double a;  cin >> a;
        pie[i] = pi * a * a;
    }
    // for(auto i : pie) cout << i << endl;
    cout << fixed << setprecision(4) << bs() << endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1; 
    cin >> t;
    while(t--) solve(t);
}