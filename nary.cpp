#include<iostream>
//#include<queue>
using namespace std;
int main()
{
    long long n,q,x,y,val,count=0;
    //queue<long long> quentin;
    cin>>n>>q;
    long long diamond[n+1];
    for(long long i=0;i<n+1;i++)
        diamond[i]=0;
        //mat[i][j]=0;

   /* for(long long i=0;i<n-1;i++)
    {
        //cout<<"Enter the nodes between which you want to long longroduce edge\n";
        cin>>x>>y;
        mat[x][y]=1;

    }
    for(long long i=1;i<n+1;i++)
    {
        cout<<endl;
        for(long long j=1;j<n+1;j++)

        cout<<mat[i][j]<<" ";
    }*/
    for(long long i=0;i<q;i++)
    {
        cin>>x>>y;
        if(x==0)
        {
            cin>>val;
            diamond[y]+=val;

        }
        if(x==1)
        {
            count=0;
            for(long long i=1;i<n+1;i++)
            {
                if(i==n && (count+diamond[i]<y))
                {
                    cout<<"-1"<<endl;
                    break;
                }
                else if(count<y)
                {
                    count+=diamond[i];
                    if(count>=y)
                    {
                        cout<<i<<endl;
                        break;
                    }
                }


            }

        }
    }
/*    for(long long i=1;i<n+1;i++)
    {
        cout<<diamond[i]<< " ";
    }*/
}
