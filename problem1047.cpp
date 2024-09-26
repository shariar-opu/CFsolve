#include <bits/stdc++.h>
 using namespace std;
int main() {
 
  int ih,im,fh,fm,difH=0,difM=0;

    cin>>ih>>im>>fh>>fm;

        if(ih>fh){
                difH=(24-ih)+fh;
            if(im>fm){
                difM=(60-im)+fm;
                difH-=1;
                cout<<"O JOGO DUROU "<<difH<<" HORA(S) E "<<difM<<" MINUTO(S)"<<endl;
                }
           else if(im<fm){
                difM = fm-im;
                 cout<<"O JOGO DUROU "<<difH<<" HORA(S) E "<<difM<<" MINUTO(S)"<<endl;
            }
            else{
                cout<<"O JOGO DUROU "<<difH<<" HORA(S) E 0 MINUTO(S)"<<endl;
            }
            difH*=0;
            difM*=0;
        }
        else if(ih<fh){
                difH=fh-ih;
            if(im>fm){
                difM=(60-im)+fm;
                difH-=1;
                cout<<"O JOGO DUROU "<<difH<<" HORA(S) E "<<difM<<" MINUTO(S)"<<endl;
                }
           else if(im<fm){
                difM = fm-im;
                 cout<<"O JOGO DUROU "<<difH<<" HORA(S) E "<<difM<<" MINUTO(S)"<<endl;
            }
            else{
                cout<<"O JOGO DUROU "<<difH<<" HORA(S) E 0 MINUTO(S)"<<endl;
            }
            difH*=0;
            difM*=0;
        }
        else{
            if(im>fm){
                difM=(60-im)+fm;
                difH=24-1;
                cout<<"O JOGO DUROU "<<difH<<" HORA(S) E "<<difM<<" MINUTO(S)"<<endl;
                }
           else if(im<fm){
                difM = fm-im;
                 cout<<"O JOGO DUROU "<<difH<<" HORA(S) E "<<difM<<" MINUTO(S)"<<endl;
            }
            else{
                cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
            }
            difH*=0;
            difM*=0;
        }
                   
 
    return 0;
}