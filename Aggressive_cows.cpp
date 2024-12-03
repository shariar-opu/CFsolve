#include<bits/stdc++.h>
using namespace std;
void solve(int tc){
    int n, c;   cin >> n >> c;
    vector<long long>stalls(n);
    for(int i = 0; i < n; i++){
        cin >> stalls[i];
    }
    sort(stalls.begin(), stalls.end());

    long long ans = INT_MAX;
    vector<long long>tmp;
    for(auto u : stalls){
        long long distance = *lower_bound(stalls.begin(), stalls.end(), u);
        if(distance > 1 && c > 0){
            cout << distance << " ";
            tmp.push_back(distance);
            c--;
        }  
    }
    cout << endl;

    sort(tmp.begin(), tmp.end());
    for(int i = 0; i < n - 1; i++){
        ans = min(ans, abs(tmp[i] - tmp[i+1]));
    }
    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(t);
}