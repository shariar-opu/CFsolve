#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    int key;    cin >> key;
   
    int l = 0, r = n - 1, ans = -1;
    while(r - l >= 0){
        int mid = (l + r) / 2;
        if(arr[mid] == key){
            ans = mid;
        }

        if(arr[mid] >= key){
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << endl;
}