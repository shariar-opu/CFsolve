#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 1e6 + 7;
bool mark[N];
void sieve(){
    mark[1] = false;
    for(ll i = 2; i < N; i++) mark[i] = true;
    for(ll i = 2; i * i < N; i++){
        if(mark[i]){
            for(ll j = i + i; j < N; j += i){
                mark[j] = false;
            }
        }
    }
}

bool has_zero(int x){
    string s = to_string(x);
    for(auto u: s){
        if(u == '0') return true;
    }
    return false;
}

bool is_valid(int x){
    if(!mark[x]) return false;
    if(has_zero(x)) return false;
    string s = to_string(x);
    for(int i = 0; i < s.size(); i++){
        string tmp = s.substr(i);
        int suf = stoi(tmp);
        if(!mark[suf]) return false;
    }
    return true;
}

bool valid[N];
int numOfValid[N];

void solve(int tc){
    int n;  cin >> n;
    cout << numOfValid[n] << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    sieve();
    for(int i = 1; i < N; i++){
        valid[i] = is_valid(i);
        numOfValid[i] = numOfValid[i - 1] + valid[i];
    }

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}