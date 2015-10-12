#include<iostream>
using namespace std;
int main()
{
    int t,cou =0,money=0;
    string c;
    cin>>t;
    while(t--)
    {
        cou=1,money=0;

        cin>>c;
        for(int i=0;i<c.length();i++)
        {

                if((i+1)%7==0)
                {
                }
                else
                {
                    if(c[i]=='M')
                        money+=3;
                    else if(c[i]='L')
                        money+=4;
                }
        }



        cout<<money<<endl;
    }
}
