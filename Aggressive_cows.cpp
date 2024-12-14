#include<bits/stdc++.h>
using namespace std;
int n, c;
vector<int>cows;
bool mono(int dist){
    int precow = cows[0], cow = c - 1;
    for(int i = 1; i < n; i ++){
        if(cows[i] - precow >= dist){
            precow = cows[i];
            cow--;
        }
    }
    return (cow <= 0);
}
int bs(){
    int l = 1, r = 1e9;
    while(r - l > 1){
        long long mid = (r + l) / 2;
        if(mono(mid)) l = mid;
        else r = mid-1;
    }
    if(mono(r)) return r;
    return l;
}
void solve(int tc){
    cin >> n >> c;
    cows.resize(n);
    for(int &i : cows){
        cin >> i;
    }
    sort(cows.begin(), cows.end());
    cout << bs() << endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve(t);
}