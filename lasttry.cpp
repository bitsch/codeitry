#include<iostream>
using namespace std;
int main(){
    long long m,q,x,y,val,cou=0;
    cin>>m>>q;
    long long prod[m];
    for(long long i=0;i<m;i++)
    {
        prod[i]=0;
    }
    for(int i=0;i<q;i++)
    {
        cin>>x;
        if(x==0)
        {
            cin>>y>>val;
            prod[y-1]+=val;
        }
        else
        {
            cin >> val;
            cou=0;
            for(int i=0;i<m;i++)
            {
                if(i==m && cou<val)
                    {
                        cout<<"-1"<<endl;
                        break;
                    }
                else if(cou<val)
                {
                    cou+=prod[i];

                    if(cou>=val)
                    {
                        cout<<i+1<<endl;
                        break;
                    }
                }


            }
        }
    }
}
