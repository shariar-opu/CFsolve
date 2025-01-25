#include<bits/stdc++.h>
using namespace std;
string s, t;
vector<int> arr;

bool calc(int del){
    if(s.size() - del < t.size()) return false;
    string tmp = s;
    for(int i = 0; i < del; i++){
        tmp.erase(tmp.begin() + arr[i]);
    }
    if(tmp.find(t) != string::npos) return true;
    else return false;
}

int bs(){
    int left = 1, right = s.size(), ans;
    while(right - left > 0){
        long long mid = (right + left) / 2;
        if(calc(mid)) {
            ans = mid;
            right = mid - 1;
        }
        else left = mid + 1;
    }

    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s >> t;

    int n = s.size();
    arr.resize(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        arr[i]--;
    }

    cout << bs() << endl;
}