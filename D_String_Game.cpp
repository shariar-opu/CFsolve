#include<bits/stdc++.h>
using namespace std;
string s, t;
vector<int> arr;

bool calc(long long del){
    if(s.size() - del < t.size()) return false;
    vector<int> need;
    for(int i = del; i < s.size(); i++){
        need.push_back(arr[i]);
    }
    sort(need.begin(), need.end()); 

    string tmp = "";
    for(auto u : need) tmp += s[u];
    
    int z = 0;
    for(int j = 0; j < tmp.size(); j++){
        if(tmp[j] == t[z]){
            z++;
            if(z == t.size()) return true;
        }
    }
    return false;
}

int bs(){
    long long left = 0, right = 1e11, ans;
    while(right - left >= 0){
        long long mid = (right + left) / 2;
        if(calc(mid)) {
            ans = mid;
            left = mid + 1;
        }
        else right = mid - 1;
    }

    return ans;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> s >> t;

    int n = s.size();
    arr.resize(n);
    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        arr[i] = a - 1;
    }

    cout << bs() << endl;
}