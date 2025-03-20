#include<bits/stdc++.h>
using namespace std;

int cntDiv[2007], n, k;

int div(){
    for(int i = 1; i <= n; i++){
        for(int j = i; j <= n; j += i) cntDiv[j]++;
    }

    int res = 0;
    for(int i = 1; i <= n; i++){
        res += ((cntDiv[i] - 1) * (k - 1));
    }

    return res + n;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> k;

    int ans = div();

    ;
}