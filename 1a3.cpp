#include<bits/stdc++.h>
using namespace std;
long long emp(long long x[],long long n)
{
    for(long long i=0;i<n;i++)
    {
        if(x[i]==0)
            return 1;
    }
    return 0;
}
long long first(long long x[],long long n)
{
    for(long long i=0;i<n;i++)
    {
        if(x[i]==0)
            return i;
    }
    return 0;
}
int main()
{
    ifstream fin;
    ofstream fout("ans.txt");
    fin.open ("input.txt");

    if(!fin.is_open())
    {
        cout<<"file error";
    }
    else
    {
        long long t,c,l,s,cou=0,m,q,flag,n,k;
        fin>>t;
        s=t;
        while(t--)
        {
            m=cou=0;
            fin>>n;
            long long x[n+1],arr[n+1];
            fill_n(x,n+1,0);
            for(long long i=1;i<=n;i++)
            {
                fin>>arr[i];
            }
            x[0]=1;
            //cout<<"while";
            while(emp(x,n+1))
            {
                cou=0;
                c=first(x,n+1);
                do{
                    cou++;
                    x[c]=1;
                    k=c;
                    c=arr[c];
                }while(x[c]!=1);
                for(int i=1;i<n+1;i++)
                {
                    if(arr[i]==k && x[i]!=1)
                    {
                        x[i]=1;
                        cou++;
                    }
                }
                if(m<cou)
                {
                    m=cou;
                }
            }
            fout<<"Case #"<<s-t<<": "<<m<<endl;
        }
        fin.close();
        fout.close();
    }
}
