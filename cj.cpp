#include <bits/stdc++.h>
using namespace std;

#define e "\n"
#define f first
#define s second
#define ll long long
#define pb push_back
#define pi (3.141592653589)
#define V vector<long long>
#define all(v) v.begin(), v.end()
#define fr(suru, ses) for (int i = suru; i < ses; i++)

vector<int>a1(11),a2(11),a3(11),a4(11);

void conv(ll x,int m){
    int i=10;
    while(x>0){
        if(m==1)a1[i]=x%10;
        else if(m==2)a2[i]=x%10;
        else if(m==3)a3[i]=x%10;
        else if(m==4)a4[i]=x%10;
        x/=10;
        i--;
    }
}


vector<int>ans1(22),ans2(22);
void multi(vector<int>a,vector<int>b,int m){
    vector<vector<int>>v(11,vector<int>(22));
    int k=21;
    for(int i=10;i>=0;i--){
        int suru=k;int extra=0;
        for(int j=b.size()-1;j>=0;j--){
            int temp=a[i]*b[j];
            temp+=extra;
            extra=0;
            if(temp<10) v[i][suru]=temp;
            else {
                v[i][suru]=temp%10;
                extra=temp/10;
            }
            suru--;
        }


        k--;
    }
    int extra=0;
    for(int i=21;i>=0;i--){
        int sum=0;
        for(int j=10;j>=0;j--){
            sum+=v[j][i];
        }
        sum+=extra;
        extra=0;
        if(sum>9){
            if(m==1) ans1[i]=sum%10;
            else ans2[i]=sum%10;
            extra= sum/10;
        }else{
           if(m==1) ans1[i]=sum;
           else  ans2[i]=sum;
        }
    }
}

vector<int>ans3(40);
void multi2(vector<int>a,vector<int>b){
    vector<vector<int>>v(22,vector<int>(40));
    int k=39;
    for(int i=21;i>=0;i--){
        int suru=k;int extra=0;

        for(int j=b.size()-1;j>=0;j--){
            int temp=a[i]*b[j];
            temp+=extra;
            extra=0;
            if(temp<10) v[i][suru]=temp;
            else {
                v[i][suru]=temp%10;
                extra=temp/10;
            }
            suru--;
        }

        k--;
    }
    int extra=0;
    for(int i=39;i>=0;i--){
        int sum=0;
        for(int j=21;j>=0;j--){
            sum+=v[j][i];
        }
        sum+=extra;
        extra=0;
        if(sum>9){
            ans3[i]=sum%10;
            extra= sum/10;
        }else{
           ans3[i]=sum;
        }
    }
}

void solve(int t,int tc){
    int a,b,c,d; cin>>a>>b>>c>>d;
    conv(a,1); conv(b,2); conv(c,3); conv(d,4);
    multi(a1,a2,1);
    multi(a3,a4,2);
    multi2(ans1,ans2);
    cout<<ans3[38]<<ans3[39]<<e;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    //cin >> t;
    fr(1, t + 1) solve(i, t);
    return 0;
}