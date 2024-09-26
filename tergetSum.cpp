#include<bits/stdc++.h>
using namespace std;
void tergetSum(int n){
    int arr[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] + arr[j] == 7) cnt++;
        }
    }
    cout << cnt << endl;
}
int main(){
    int num;
    cin >> num;
    tergetSum(num);
}