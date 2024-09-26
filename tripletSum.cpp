#include<bits/stdc++.h>
using namespace std;
void tripletSum(int n){
    int arr[n];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(arr[i] + arr[j] + arr[k] == 5) cnt++;
            }
        }
    }
    cout << cnt << endl;
}
int main(){
    int num;
    cin >> num;
    tripletSum(num);
}