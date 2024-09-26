#include<bits/stdc++.h>
using namespace std;
// int sum(int a,int b){
//     int sum=a+b;
//     return sum;
// }
// void sub(int a,int b){
//     int sub=a-b;
//     cout<<sub<<endl;
// }
// void mul(int a,int b){
//     int mul=a*b;
//     cout<<mul<<endl;
// }
// void division(int a,int b){
//     float div=(float)a/b;
//     cout<<div<<endl;
// }
// void squre(int n){
//     int result = n*n;
//     cout<<"squre of "<<n<<" = "<<result<<endl;
// }

// int main(){
    // int add = sum(10,20);
    // int add1 = sum(20,20);
    // cout<<add<<endl<<add1<<endl;
    // sub(10,20);
    // mul(10,20);
    // division(10,20);

    // squre(3);
    // squre(4);
    // squre(6);
//   int n,m;
//   cin>>n>>m;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//         if(i==1 || j==1 || i==n || j==m){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
//   }
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=(2*i-1);j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }
// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=i;j<=n;j++){
//         cout<<j;
//     }
//     for(int j=1;j<=i-1;j++){
//         cout<<j;
//     }
//     cout<<endl;
// }

// int n;
// cin>>n;
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=(n-i);j++){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<j;
//     }
//     for(int j=(i-1);j>=1;j--){
//         cout<<j;
//     }
//     cout<<endl;
// }
// int n,r,power=1,m=0;
// cin>>n;
// while(n>0){
//     r=n%2;
//     m += (r*power);
//     power*=10;
//     n/=2;
// }
// cout<<m<<endl;
// }

int squre(int n){
    return n*n;
    }
double radius_circle(int r){
    return 3.14*squre(r);
}
double circomference(int r){
     return 2*3.14*r;
}
int check_eligibility(int age,int limit){
    if(age>=limit){
        cout<<"Yes.You are elligible for vote."<<endl;
    }
    else{
        cout<<"Unforsonantly you NOT elligible for vote."<<endl;
    }
}
bool oddNum(int num){
    if(num % 2 == 0){
        return false;
    }
    else{
        return true;
    }
}
bool primeNum(int a){
    for(int i=2;i<a;i++){
        //check prime or not.
        if(a%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
bool btrPrimeNum(int a){
    for(int i=2; i <= sqrt(a);i++){
        // (i*i)=> i^2 = a; => i = sqrt(a);
        //check prime or not.
        if(a%i==0){
            return false;
        }
        else{
            return true;
        }
    }
}
int main(){
    // int r;
    // cin>>r;
    // cout<<radius_circle(r)<<endl;
    // cout<<circomference(r)<<endl;
    // int age,limit;
    // cin>>age>>limit;
    // check_eligibility(age,limit);
    // int fristNum,secondNum;
    // cin>>fristNum>>secondNum;
    // if(fristNum>secondNum){
    //     swap(fristNum,secondNum);
    // }
    // for(int i = fristNum;i<=secondNum;i++){
    //     if(oddNum(i)){
    //         cout<<i<<" ";
    //     }
    // }
    // int a,b;
    // cin>>a>>b;
    // if(a>b){
    //     swap(a,b);
    // }
    // for(int j=a;j<=b;j++){
    //     if(primeNum(j)){
    //         cout<<j<<" ";
    //     }
    // }
    int a,b;
    cin>>a>>b;
    if(a>b){
        swap(a,b);
    }
    for(int j=a;j<=b;j++){
        if(btrPrimeNum(j)){
            cout<<j<<" ";
        }
    }

}