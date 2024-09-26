#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n,m,k;
    cin >> n >> m >>k;
    int arr[n];
    vector<vector<int>> vp;    
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < m; i++){
        int l,r,val;    cin >> l >> r >> val;
        vp.push_back({l,r,val});
    }
    vector<int>q(m+1), pre2(m);
    for(int i = 0 ; i < k; i++){
        int x,y;    cin>> x >> y;
        q[x-1]++;
        q[y]--;
    }
    vector<int> ve(n+1);
    pre2[0] = q[0];
    ve[vp[0][0] -1] += vp[0][2] * pre2[0];
    ve[vp[0][1]] -= vp[0][2] * pre2[0];
    for(int i = 1; i<m; i++){
        pre2[i] = pre2[i-1] + q[i];
        ve[vp[i][0] -1] += vp[i][2] * pre2[i];
        ve[vp[i][1]] -= vp[i][2] * pre2[i];
    }
    vector<int> pre3(n);
    pre3[0] = ve[0];
    arr[0]+= pre3[0];
    cout << arr[0] << " ";
    for(int i = 1; i < n; i++){
        pre3[i] = pre3[i-1] + ve[i];
        arr[i]+= pre3[i];
        cout << arr[i]<< " ";
    }
    cout << "\n";
}