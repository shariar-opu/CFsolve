#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> arr;

int lb(int key){
    int l = 0, r = n - 1, lo = -1;
    while(r - l >= 0){
        int mid = (l + r) / 2;

        if(arr[mid] >= key){
            lo = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    if(lo == -1) lo = n;
    return lo;
}   

int ub(int key){
    int l = 0, r = n - 1, up = n;
    while(r - l >= 0){
        int mid = (l + r) / 2;

        if(arr[mid] > key){
            up = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return up;
}

void solve(int tc){
    int q;  cin >> n >> q;
    arr.resize(n);
    for(int &i : arr) cin >> i;

    cout << "Case " << tc << ": " << endl;
    while(q--){
        int x, y;   cin >> x >> y;
        // cout << "me " << lb(x) << " " << ub(y) << endl;
        // int xx = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        // int yy = upper_bound(arr.begin(), arr.end(), y) - arr.begin();
        // cout << xx << " " << yy << endl;
        cout << ub(y) - lb(x) << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
}