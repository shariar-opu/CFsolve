#include<bits/stdc++.h>
using namespace std;

const int inf = 2e5;
string s, t;
int arr[inf + 7];
bool mark[inf + 7];

bool calc(long long del){
    memset(mark, 0, sizeof(mark));

    for(int i = 1; i <= del; i++) mark[arr[i]] = 1;
    
    int z = 0;
    for(int j = 0; j < s.size(); j++){
        if(s[j] == t[z] && !mark[j+1]){
            z++;
            if(z == t.size()) return true;
        }
    }
    return false;
}

int bs(){
    long long left = 0, right = s.size(), ans;
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
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    cout << bs() << endl;
}