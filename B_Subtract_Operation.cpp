#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;  cin >> n >> k;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        pq.push(a);
    }

    int sub = 0, cnt = 0;
    while(!pq.empty()){
        int x = pq.top();
        x -= sub;
        sub += x;
        cout << pq.top() << " " << x << " " << sub << endl;
        pq.pop();

        // if(x == 0){
        //     cnt++;
        //     pq.pop();
        // }
        // else {
        //     for(int i = 0; i < cnt; i++){
        //         pq.push(-1 * x);
        //     }
        // }
    }
    cout << sub << endl;
    cout << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    while(t--) solve();
}