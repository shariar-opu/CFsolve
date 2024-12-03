#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    int cnt = 0;
    while( n > 0) {
        n /= 5;
        cnt+=n;
    }
    cout << cnt << "\n";
    return 0;
}