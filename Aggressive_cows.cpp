#include<bits/stdc++.h>
using namespace std;
void solve(int tc){
    int n, c;   cin >> n >> c;
    vector<long long>stalls(n);
    for(int i = 0; i < n; i++){
        cin >> stalls[i];
    }
    sort(stalls.begin(), stalls.end());

    long long k = 0;
    vector<long long>tmp(c);
    tmp[k] = stalls[0];
    k++;
    for(int i = 1; i < n; i++){
        long long distance = *lower_bound(stalls.begin(), stalls.end(), stalls[i]);
        // cout << distance << " ";
        if(abs(distance - tmp[k-1]) > 1 && k <= c){
            // cout << distance << " ";
            tmp[k] = distance;
            k++;
        } 
    }
    // cout << endl;

    long long ans = INT_MAX;
    sort(tmp.begin(), tmp.end());
    for(int i = 1; i < c; i++){
        ans = min(ans, abs(tmp[i] - tmp[i-1]));
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(t);
}