#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn cout << cnt << endl;
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int binarySerch(int a[], int n, int data){
    int l , r , mid = 0;
    l = 0;
    r = n-1;
    while(l <= r ){
        mid  = (l + r) / 2;
        if( data == a[mid] ) return mid+1;
        else if(data > a[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}
int main()
{
    // optimize();
    // int n; 
    // cout << "Enter array size: ";
    // cin >> n;
    // int a[n];
    // cout << "Enter array element : ";
    // fi(0,n){
    //     cin >> a[i];
    // }
    // cout << "Which element you find? : ";
    // int data; cin >> data;
    // cout << "Element is found!" << endl <<"the element position is : " << binarySerch(a, n , data) << endl;

    int m , n;
    cin >> m >> n;
    int a[m][n];
    int sum = 0;

    fi(0,m){
        fj(0,n){
            cin >> a[i][j];
            }
        }

    fi(0,m){
        fj(0,n){
            if( i == j ){
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;

}