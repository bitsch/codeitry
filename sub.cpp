#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
	long long t,n,c,maxim,hashs[26];
	cin>>t;
    while(t--)
    {
        cin>>n;
        char ans[n],guess[n];
        long long W[n+1];
        for(int i=0;i<26;i++)
        {
            hashs[i]=0;
        }
        for(long long i=0;i<n;i++)
        {
            cin>>ans[i];
        }
        for(long long i=0;i<n;i++)
        {
            cin>>guess[i];
        }
        for(long long i=0;i<n+1;i++)
        {
            cin>>W[i];
        }
        c=0;
        for(long long i=0;i<n;i++)
        {
            hashs[(int)ans[i]-65]++;
        }
        for(long long i=0;i<n;i++)
        {
            if(hashs[(int)guess[i]-65]>0)
            {
                hashs[(int)guess[i]-65]--;
                c++;
            }
        }

        //cout<<c<<" ";
        maxim=W[0];
        for(long long i=0;i<=c;i++)
        {
            if(maxim<W[i])
                maxim=W[i];
        }
        cout<<maxim<<endl;
    }
}
