#include<bits/stdc++.h>
using namespace std;
#define int long long
const int mxN = 1e6;
int mark[mxN+123];
void seive(){
    mark[0] = mark[1] = 1;
    for(int i = 4; i <= mxN; i += 2)mark[i] = 1;
    for(int i = 3; i*i <= mxN; i += 2){
        if(!mark[i]){
            for(int j = i*i; j <= mxN; j += 2*i){
                mark[j] = 1;
            }
        }
    }
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    seive();
    int t;  cin >> t;
    while(t--){
        int d;  cin >> d;
        int p1 = d + 1;
        while(mark[p1])p1++;
        int p2 = d + p1;
        while(mark[p2])p2++;
        cout << p1 * p2 << '\n';
    }
}