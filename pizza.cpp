#include<iostream>
using namespace std;
int main()
{
    int t,piz[4],price[3],pizc,m,slice[3],sums,pos,c;
    float rate[3];
    cin>>t;
    while(t--)
    {
        sums=0;
        pizc=0;
        for(int i=0;i<3;i++)
        {
            slice[i]=0;
        }
        for(int i=0;i<7;i++)
        {
            if(i<4)
            {
                cin>>piz[i];
                pizc+=(i*piz[i]);
            }

            else {
                    cin>>price[i-4];
                    rate[i-4]=price[i-4]/((2*i)-4);
            }
        }
        cout<<pizc<<endl;
        while(pizc>sums)
        {
            m=rate[0];
            for(int i=0;i<3;i++)
            {
                if(rate[i]<=m)
                {
                    m=rate[i];
                    pos=i;
                }
            }
            rate[pos]=1001;
            if((pizc-sums)%((2*pos)+4)>((2*pos)+2))
            slice[pos]=(pizc-sums)/((2*pos)+4);
                else slice[pos]=(pizc-sums)/((2*pos)+4)-1;
            sums+=slice[pos]*((2*pos)+4);
            cout<<sums<< " ";
            cin>>c;
        }
        for(int i=0;i<3;i++)
        {
            cout<<slice[i]<<" ";
        }

        cout<<endl;

    }
}
