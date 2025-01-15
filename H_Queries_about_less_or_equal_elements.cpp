#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n, m;   cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &i : a) cin >> i;
    sort(a.begin(), a.end());
    for(int &i : b){
        cin >> i;
        int ans = upper_bound(a.begin(), a.end(), i) - a.begin();
        cout << ans << " ";
    }
    cout << endl;
}