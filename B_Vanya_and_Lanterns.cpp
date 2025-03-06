#include<bits/stdc++.h>
using namespace std;
#define double long double

int n, k;
vector<int> arr;

bool calc(double x){
    double res = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] - x <= res){
            res = arr[i] + x;
        }
        else return false;
    }

    return k <= res;
}

double bs(){
    double l = 0, r = k;

    while(r - l > 1e-10){
        double mid = (r + l) / 2;
        if(calc(mid)) r = mid;
        else l = mid;
    }

    if(calc(l)) return l;
    return r;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n >> k;
    
    arr.resize(n);
    for(int &i : arr) cin >> i;

    sort(arr.begin(), arr.end());

    cout  << fixed << setprecision(10) << bs() << endl;
}