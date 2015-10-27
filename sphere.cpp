#include<iostream>
using namespace std;
int main()
{
    int a,b,c,x=0,temp;
    cin>>a>>b>>c;

    int radi[a],radii[b],upper[a][2],lower[b][2],sphere[a][2];
    for(int i=0;i<a;i++)
    {
        cin>>radi[i];
    }
    for(int i=0;i<b;i++)
    {
        cin>>radii[i];
    }
    for(int i=0;i<a;i++)
    {
        x=0;
        temp=radi[i];
        for(int j=i;j<a;j++)
        {
            if(temp==radi[j])
            {
                radi[j]=0;
                x++;
            }
        }
        upper[i][0]=temp;
        upper[i][1]=x;
    }
    for(int i=0;i<b;i++)
    {
        x=0;
        temp=radii[i];
        for(int j=i;j<b;j++)
        {
            if(temp==radii[j])
            {
                radii[j]=0;
                x++;
            }
        }
        lower[i][0]=temp;
        lower[i][1]=x;
    }
    int k=0;
    for(int i=0;i<a;i++)
    {
        temp=upper[i][0];
        if(temp!=0)
        for(int j=0;j<b;j++)
        {
            if(temp==lower[j][0])
            {
                sphere[k][0]=temp;
                sphere[k][1]=lower[j][1]*upper[i][1];
                k++;
            }
        }

    }
    for(int i=0;i<k;i++)
    {
        cout<<sphere[i][0]<<" "<<sphere[i][1]<<endl;
    }
    for(int i=1;i<=c;i++)
    {

    }
}

