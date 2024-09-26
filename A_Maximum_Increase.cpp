#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;  cin >> n;
    vector<int>arr(n);
    for(int &i : arr)cin >> i;

    int cnt = 0,mn=0;
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1])cnt++;
        else mn = max(mn,cnt+1),cnt=0;
    }
    mn = max(mn,cnt+1);
    cout<<mn << endl;
}