#include<bits/stdc++.h>
using namespace std;
int main(){
    long long x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    long long ans = (x1 * (y2 - y1)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2));

    ans? cout << "NO\n" : cout << "YES\n";
}