#include<bits/stdc++.h>
using namespace std;
int n, t;
vector<int>arr;

bool check(int x){
    int l = 0, r = x;
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
    // if(check(r)) return r;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> t;
    arr.resize(n);
    for(int &i : arr) cin >> i;

    // sort(arr.begin(), arr.end());
    
    cout << bs() << endl;
}