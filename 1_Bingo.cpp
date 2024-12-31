#include<bits/stdc++.h>
using namespace std;
int n;
int arr[55][5][5];
set<int>master;
vector<string>player(n);

bool row(int p){
    for(int i = 0; i < 5; i++){
        for( int j = 0; j < 5; j++ ){
            if(master.find(arr[p][i][j]) == master.end()) break;
            else if(j == 4) return 1;
        }
    }
    return 0;
}
bool column(int p){
    for(int i = 0; i < 5; i++){
        for( int j = 0; j < 5; j++ ){
            if(master.find(arr[p][j][i]) == master.end()) break;
            else if(j == 4) return 1;
        }
    }
    return 0;
}
bool diagonal(int p){
    for(int i = 0; i < 5; i++){
        if(master.find(arr[p][i][i]) == master.end()) break;
        else if(i == 4) return 1;
    }

    for(int i = 0; i < 5; i++){
        if(master.find(arr[p][i][4 - i]) == master.end()) break;
        else if(i == 4) return 1;
    }
    return 0;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie();cout.tie(0);
    cin >> n;
    player.resize(n);
    for(int i = 0; i < n; i++){
        cin >> player[i];
        for(int j = 0; j < 5; j++){
            for(int k = 0; k < 5; k++){
                cin >> arr[i][j][k];
            }
        }
    }
    int m;  cin >> m;
    for(int i = 0; i < m; i++){
        int a;  cin >> a;
        master.insert(a);
    }
    vector<string>ans;

    for( int i = 0; i < n; i++ ){
        if(row(i)){
            ans.push_back(player[i]);
        }
        else if(column(i)){
            ans.push_back(player[i]);
        }
        else if(diagonal(i)){
            ans.push_back(player[i]);
        }
    }
    if(!ans.empty()){
        cout << ans.size() << endl;
        for(auto u : ans) cout << u << endl;
    }
    else cout << 0 << endl;
}