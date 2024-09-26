#include<bits/stdc++.h>
using namespace std;
void solve(int n , string s){
    int x = 0;
    for(int i = 0; i < n; i++){
        cin >> s;
        if(s == "X++"){
            x = x + 1;
        }
        else if (s == "X--"){
            x = x - 1;
        }
        else if(s == "++X"){
            ++x;
        }
        else if(s == "--X"){
            --x;
        }
    }
    cout << x << endl;
}
int main(){
    int n; cin >> n;
    string s;
    solve(n , s);
}