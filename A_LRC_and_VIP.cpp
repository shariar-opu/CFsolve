#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for(int &i : arr) {
        cin >> i;
        mp[i]++;
    }
    int mx = *max_element(arr.begin(),  arr.end());
    if(mp.size() == 1) cout << "NO\n";
    else{
        cout << "YES\n";
        for(int i = 0; i < n; i++){
            if(mx != arr[i]) cout << 1 << " ";
            else cout << 2 << " ";
        }
        cout << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}