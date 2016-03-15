#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long x,ca=0,cb=0;

    cin>>x;
    while(x--)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"DRAW"<<endl;
        }
        else if(a=='R'&&b=='S' || a=='S' && b=='P' || a=='P' && b=='R')
        {
            cout<<"A WINS"<<endl;
            ca++;
        }
        else {cout<<"B WINS"<<endl;
        cb++;
        }
    }
    if(ca>cb)
    {
        cout<<"A WINS TOURNAMENT"<<endl;
    }
    else if(ca<cb)
    {
        cout<<"B WINS TOURNAMENT"<<endl;
    }
    else if(ca==cb)
    {
        cout<<"DRAW"<<endl;
    }
}
