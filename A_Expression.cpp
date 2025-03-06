// bismillah
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b, c;    cin >> a >> b >> c;

    vector<int>ans;
    ans.push_back(a * b * c);
    ans.push_back((a * b) + c);
    ans.push_back(a * (b + c));
    ans.push_back(a + (b * c));
    ans.push_back((a + b) * c);
    ans.push_back(a + b + c);
    
    cout << *max_element(ans.begin(), ans.end()) << endl;
}