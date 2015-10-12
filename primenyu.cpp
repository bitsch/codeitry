#include<iostream>
#include<cmath>
#include<cstdlib>
#include <map>
using namespace std;
int check(int i,int word)
{
    int x=0,y=0, gap=0;
    while(i>0)
    {
        x=word%10;
        word=word/10;
        y=i%10;
        i=i/10;
        if(abs(x-y)>6)
        gap+=5-(abs(x-y)%5);
        else
            gap+=(abs(x-y));

    }
    while(word!=0)
    {
        x=word%10;
        word=word/10;
        if(abs(x-0)>6)
        gap+=5-(abs(x-0)%5);
        else
            gap+=(abs(x-0));

    }
    return gap;
}
int main ()
{
    //map<int,int> mymap;
    int t,n,a,mn,code=0,cow=0,gap[10000],an=0;

    for (int i=2; i<pow(10,5); i++)
        {
           // cout<<i<<" ";
            bool prime=true;
            for (int j=2; j*j<=i; j++)
            {
                if (i % j == 0)
                {
                    prime=false;
                    break;
                }
            }
            if(prime) {
                gap[cow++]=check(i,code);

            }
        }

    while(t--)
    {
        cin>>n>>code;
        mn=check(0,code);

        an=abs(mn-gap[0]);
        for (int i=0; i<cow; i++)
        {
            //cout<<abs(mn-gap[i])<<" ";
            cin>>a;
            if(an<abs(mn-gap[i]))
            {
                an=abs(mn-gap[i]);
            }
        }
        cout<<an<<endl;
    }
    return 0;
}
