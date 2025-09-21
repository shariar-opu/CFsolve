#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll

void solve(int tc){
    int n, ans = 0;  cin >> n;
    vector<int> odd, even;
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        if(a & 1) odd.push_back(a);
        else even.push_back(a);
        ans += a;
    }

    if(odd.size() == 0) {
        cout << 0 << "\n";
        return;
    }

    sort(odd.begin(), odd.end());
    int cut = odd.size() / 2;

    for(int i = 0; i < cut; i++){
        ans -= odd[i];
    }

    cout << ans << '\n';

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}