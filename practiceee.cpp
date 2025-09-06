#include<bits/stdc++.h>
using namespace std;

int binToDc[] = {128, 64, 32, 16, 8, 4, 2, 1};

int convertor(string s) {
    int res = 0;
    for(int i = 0; i < 8; i++) {
        if(s[i] == '1') res += binToDc[i];
    }
    return res;
}

void solve(int tc){
    string decimal, binary;    
    cin >> decimal >> binary;

    vector<int> check1, check2;
    string tmp = "";
    for(int i = 0; i < decimal.size(); i++) {
        if(decimal[i] == '.') {
            check1.push_back(stoi(tmp));
            tmp.clear();
        }
        else {
            tmp += decimal[i];
        }
    }
    check1.push_back(stoi(tmp));
    tmp.clear();

    
    for(int i = 0; i < binary.size(); i++) {
        if(binary[i] == '.'){
            check2.push_back(convertor(tmp));
            tmp.clear();
        }
        else tmp += binary[i];
    }
    
    check2.push_back(convertor(tmp));
    
    for(int i = 0; i < 4; i++){
        if(check1[i] != check2[i]) {
            cout << "Case " << tc << ": "<< "No\n";
            return;
        }
    }

    cout << "Case " << tc << ": "<< "Yes\n";
    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}