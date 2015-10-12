#include<iostream>
using namespace std;
int main()
{
    int t,n,c=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n][n],sub[n-1];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
            cin>>arr[i][j];
            }
        }
        for(int i=0;i<n-1;i++)
        {
            sub[i]=arr[0][i]-arr[0][i+1];
        }
        c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(sub[j]!=arr[i][j]-arr[i][j+1])
                {
                    c++;
                    break;
                }
            }
        }
        if(c==0)
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
    }
}
