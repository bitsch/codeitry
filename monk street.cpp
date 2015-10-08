#include<iostream>
#include<queue>
using namespace std;
int maxim(int a[],int m)
{
    int temp=a[1];
    for(int i=1;i<=m;i++)
        if(a[i]>temp)
    {
        temp=a[i];
    }
    return temp;
}
int main()
{
    int t,n,m,a,b,f;
    cin>>t;
    queue<int>quentin;

    while(t--)
    {
        cin>>m>>n;

        int maps[m+1][m+1],weight[m+1],visited[m+1],sum[m+1];

        while(!quentin.empty())
        {
            quentin.pop();
        }
        for(int i=0;i<=m;i++)
        {
            visited[i]=0;
            sum[i]=0;
            for(int j=0;j<=m;j++)
            {
                maps[i][j]=0;
            }
        }
        while(n--)
        {
            cin>>a>>b;
            maps[b][a]=1;
            maps[a][b]=1;
        }
        for(int i=1;i<=m;i++)
        {
            cin>>weight[i];
        }
        for(int i=1;i<=m;i++)
        {
            if(!visited[i])
            {
            //cout<<"\n "<<i;
                quentin.push(i);
                visited[i]=1;
                sum[i]+=weight[i];
                //cout<<"pushed="<<i;
                //f=i;
                while(!quentin.empty())
                {
                	f=quentin.front();
                	//cout<<"I="<<f;
                    quentin.pop();

                    for(int j=1;j<=m;j++)
                    {

                        if(maps[f][j]==1)
                        {
                            if(!visited[j])
                            {
                                sum[i]+=weight[j];
                                quentin.push(j);
                                //cout<<"pushed="<<j;
                                visited[j]=1;
                            }
                        }
                    }
                }
            }
        }
        /*for(int i=0;i<=m;i++)
        {
            cout<<sum[i]<<endl;
        }*/
        cout<<maxim(sum,m)<<endl;
    }
    return 0;
}
