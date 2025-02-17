#include<bits/stdc++.h>
using namespace std;
int lb(int n, int key, vector<int> &arr){
    int l = 0, r = n - 1;
    while(r - l > 0){
        int mid = (l + r) / 2;

        if(arr[mid] >= key){
            r = mid;
        }
        else {
            l = mid + 1;
        }
    }
    return r;
}
int ub(int n, int key, vector<int> &arr){
    int l = 0, r = n;
    while(r - l > 0){
        int mid = (l + r) / 2;

        if(arr[mid] <= key){
            l = mid + 1;
        }
        else {
            r = mid;
        }
    }
    return r - 1;
}
int main(){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    int key;    cin >> key;
   
    int l = 0, r = n - 1, ans = -1;
    // while(r - l >= 0){
    //     int mid = (l + r) / 2;
    //     if(arr[mid] == key){
    //         ans = mid;
    //     }

    //     if(arr[mid] >= key){
    //         r = mid - 1;
    //     }
    //     else l = mid + 1;
    // }
    // ans = upper_bound(arr.begin(), arr.end(), key) - arr.begin();
    ans = lb(n, key, arr);

    cout << ans << endl;
}