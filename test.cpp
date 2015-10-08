#include<iostream>
using namespace std;
int main()
{
    long long t,n,c=0,maxim=0,maxi=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        char ans[n],guess[n];
        long long W[n+1],calc[n];
        for(int i=0;i<n;i++)
        {
            cin>>ans[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>guess[i];
        }
        for(int i=0;i<=n;i++)
        {
            cin>>W[i];
        }
        for(int i=0;i<n;i++)
        {
            c=0;
            int j=i;
            while(ans[j]==guess[j]&&j<n)
            {
                c++;
                j++;
            }
            calc[i]=c;
        }

        for(int i=n-1,j=0;i>=0;i--,j++)
        {
            if(ans[i]!=guess[i])
            {
                break;
            }
            else
            {
                calc[i]+=calc[j];
            }
        }
        for(int i=0;i<n;i++)
        {
            if(calc[i]>n)
            {
                calc[i]=n;
            }
        }
        maxim=calc[0];
        for(int i=0;i<n;i++)
        {
            if(maxim<calc[i])
                maxim=calc[i];
        }
        maxi=W[0];
        for(int i=0;i<=maxim;i++)
        {
            if(maxi<W[i])
                maxi=W[i];
        }
        cout<<maxi<<endl;
    }
}

