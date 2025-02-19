#include<bits/stdc++.h>
using namespace std;
bool tip(int i){
    int k = i;
    int val=0;
    while(k > 0){
        int r = k % 10;
        val += (r * r * r);
        k /= 10;
    }

    if(val == i) return true;
    else return false;

}
void solve(int t){
    int n, m;
    while(cin >> n >> m){
        vector<int> ans;
        for(int i = n; i <= m; i++){
            if(tip(i)) ans.push_back(i);
        }
    
        sort(ans.begin(), ans.end());
        if(ans.size() == 0) cout << "no";
        else {
            for(int i = 0; i < ans.size(); i++) cout << ans[i] << " ";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--) solve(t);
}