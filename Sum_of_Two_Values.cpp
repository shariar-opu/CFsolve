#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, x;   cin >> n >> x;
    
    vector<pair<int, int>> vp;
    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        vp.push_back({a, i + 1});
    }

    sort(vp.begin(), vp.end());

    int l = 0, r = n - 1;
    while(r - l > 0){
        if(vp[l].first + vp[r].first == x){
            cout << vp[l].second << " " << vp[r].second << endl;
            return 0;
        }
        else if(vp[l].first + vp[r].first > x){
            r--;
        }
        else l++;
    }

    cout << "IMPOSSIBLE\n";
}