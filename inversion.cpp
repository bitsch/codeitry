#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define si(n)  scanf("%d", &n)
    #define sc(n)  scanf("%c", &n)
    #define sl(n) scanf("%lld", &n)
    #define sf(n) scanf("%f", &n)
    #define ss(n) scanf("%s", n);
ll a[100009];


ll merge_srt(ll m,ll n)
{
    //cout<<m<<" "<<n<<"\n";
    if(m>=n)return 0;
    ll x=merge_srt(m,(n+m)/2);
    x+=merge_srt(((n+m)/2)+1,n);
    for(ll i=m,j=(n+m)/2+1;i<=(n+m)/2&&j<=n;)
    {
        if(a[i]<=a[j])
        {
            i++;
        }
        else
        x+=(n+m)/2-i+1,j++;
    }
    sort(a+m,a+n+1);
    return x;
}

int main()
{
    int t,ca=1;
    cin>>t;
    while(t--)
    {
        ll n,k,x=0,i,j;
        sl(n);
        sl(k);
        for(i=0;i<n;i++)
        {
            sl(a[i]);
        }
        /*for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    x++;
                }
            }
        }*/
        x=merge_srt(0,n-1);
        if(k<x)
        {
            k=x-k;
        }
        else
        {
            k=k-x;
            if(k%2==0)
                k=0;
            else
                k=1;
        }
        cout<<"Case "<<ca<<" :"<<k<<"\n";
        ca++;
    }
}
