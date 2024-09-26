#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        map<int,int>cnt;
        int n;  cin >> n;
        vector<int>arr(n),b(n);
        for(int i = 0; i < n;i++){
            cin >> arr[i];
            cnt[arr[i]]++;
        }
        int count = 0;
        for(auto u : cnt){
            if(u.second >=2)count++;
        }
        int k = 0;
        if(count >= 2){
            for(int i = 0; i < n; i++){
                if(arr[i] != -1 && cnt[arr[i]] >= 2){
                    for(int j = i+1; j < n; j++){
                        if(arr[i] == arr[j]){
                            if(k%2==0){
                                b[j] = 2;
                                arr[j] = -1;
                            }
                            else {
                                b[j] = 3;
                                arr[j] = -1;
                            }
                        }
                    }
                }
                else {
                    if(arr[i] != -1) b[i]=1;
                }
                if(cnt[arr[i]] >= 2) b[i]=1, k++;
            }
            for(auto u : b) cout << u << " ";
            cout << "\n";
        }
        else cout << -1 << endl;
        
    }
}