#include<iostream>
#include<queue>
using namespace std;
int main()
{
    int n,q,x,y,temp,count=0;
    queue<int> quentin;
    cin>>n>>q;
    int mat[n+1][n+1],diamond[n+1];
    for(int i=0;i<n+1;i++)
        for(int j=0;j<n+1;j++)
    {
        mat[i][j]=0;
        diamond[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
        //cout<<"Enter the nodes between which you want to introduce edge\n";
        cin>>x>>y;
        mat[x][y]=1;

    }
  /*  for(int i=1;i<n+1;i++)
    {
        cout<<endl;
        for(int j=1;j<n+1;j++)

        cout<<mat[i][j]<<" ";
    }
    for(int i=0;i<q;i++)
    {
        cin>>x>>y;
        if(x==0)
        {
            quentin.push(y);
            while (!quentin.empty())
            {
                temp=quentin.front();
                quentin.pop();
                if(diamond[temp]==0)
                diamond[temp]=1;
                else
                diamond[temp]=0;
                for(int i=1;i<n+1;i++)
                {
                    if(mat[temp][i]==1)
                        quentin.push(i);
                }
            }

        }
        if(x==1)
        {
            count=0;
            quentin.push(y);
            while (!quentin.empty())
            {
                temp=quentin.front();
                quentin.pop();
                if(diamond[temp]==1)
                count++;
                for(int i=1;i<n+1;i++)
                {
                    if(mat[temp][i]==1)
                        quentin.push(i);
                }
            }
            cout<<count<< endl;

        }
    }
/*    for(int i=1;i<n+1;i++)
    {
        cout<<diamond[i]<< " ";
    }*/
}
