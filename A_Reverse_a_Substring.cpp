#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;  cin>>n;
    string s;   cin >> s;
    int l = 0, r = n-1;
    while(l>r){
        if(s[l]>s[r]){
            cout<<"YES\n";
            cout << l+1 << " " << r+1<<"\n";
            break;
        }
        else{
            r--,l++;
        }
    }
}