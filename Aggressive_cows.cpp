#include<bits/stdc++.h>
using namespace std;

int n,c;
vector<int>v;
bool mono(int dist) {
    int cow = c - 1;
    int prev=v[0];
    for(int i = 0;i<n;i++) {
        if(v[i] - prev >= dist) {
            cow--;
            prev=v[i];
        }
    }
    return (cow <= 0);
}

int bs() {
    int l = 1,r = 1e9;
    while(r - l > 1) {
        long long mid = (r+l) / 2;
        if(mono(mid))l=mid;
        else r = mid-1;
    }
    if(mono(r))return r;
    return l;
}

int main() {
    int t;cin>>t;
    while(t--) {
        cin>> n>>c;
        v.resize(n);
        for(int &i:v)cin>>i;
        sort(v.begin(),v.end());
        cout<<bs() <<"\n";
    }
}