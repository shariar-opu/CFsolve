#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n";
int main()
{
    optimize();
    int ih,im,fh,fm,h1,h2,m1,m2;
    cin>>ih>>im>>fh>>fm;
    if(ih<=24 && fh<=24 && im<=60 && fm<=60)
    {
        if(ih>fh)
        {
            h1=(24-ih)+fh;
            if(im>fm)
            {
                m1=(60-im)+fm;
                cout<<"O JOGO DUROU "<<h1<<" HORA(S) E "<<m1<<" MINUTO(S)"<<endl;
            }
            else if(im<fm)
            {
                m2=fm-im;
                cout<<"O JOGO DUROU "<<h1<<" HORA(S) E "<<m2<<" MINUTO(S)"<<endl;
            }
            else
            {
                cout<<"O JOGO DUROU "<<h1<<" HORA(S) E "<<"0 MINUTO(S)"<<endl;
            }

        }
        else if(ih<fh)
        {
            h2=fh-ih;
            if(im>fm)
            {
                m1=(60-im)+fm;
                cout<<"O JOGO DUROU "<<h2<<" HORA(S) E "<<m1<<" MINUTO(S)"<<endl;
            }
            else if(im<fm)
            {
                m2=fm-im;
                cout<<"O JOGO DUROU "<<h2<<" HORA(S) E "<<m2<<" MINUTO(S)"<<endl;
            }
            else
            {
                cout<<"O JOGO DUROU "<<h1<<" HORA(S) E "<<"0 MINUTO(S)"<<endl;
            }
        }
       else if(fh+1==ih)
            {
                if(im>fm)
                {
                    m1=(60-im)+fm;
                    cout<<"O JOGO DUROU "<<"0 HORA(S) E "<<m1<<" MINUTO(S)"<<endl;
                }
                else if(im<fm)
                {
                    m2=fm-im;
                    cout<<"O JOGO DUROU "<<"0 HORA(S) E "<<m2<<" MINUTO(S)"<<endl;
                }
                else
                {
                    cout<<"O JOGO DUROU "<<"0 HORA(S) E "<<"0 MINUTO(S)"<<endl;
                }
            }
        else
        {
            cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
        }
    }

}
