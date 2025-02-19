#include<bits/stdc++.h>
using namespace std;
int n, t;
vector<int>arr, pre;

bool check(int x){
    int l = 1, r = x, res = 0;
    while(r <= n){
        res = pre[r] - pre[l - 1];
        l++, r++;
        if(res <= t) return true;
    }
    return false;
}

int bs(){
    int l = 0, r = n, ans = 0;
    while(r - l >= 0){
        int mid = (l + r) / 2;
        if(check(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> t;
    arr.resize(n + 1);
    pre.resize(n + 1);

    for(int i = 1; i <= n; i++) cin >> arr[i];

    int sum = 0;
    for(int i = 1; i <= n; i ++){
        sum += arr[i];
        pre[i] = sum;
    }
    
    cout << bs() << endl;
}