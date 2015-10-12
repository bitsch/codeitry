#include<iostream>
using namespace std;
int main()
{
    int t,i,q,cou=0;
    long long x;
    cin>>t;
    while(t--)
    {
        int y;
        cin>>y;
        while(y--)
        {
            cou=0;
            cin>>i>>x>>q;
            int arr[x];
            for(long long a=0;a<x;a++)
            {
                arr[a]=i;
            }
            for(long long a=0;a<x;a++)
            {
                for(long long b=0;b<=a;b++)
                {
                    if(arr[b]==1)
                        arr[b]=2;
                    else arr[b]=1;
                }
            }
            for(long long a=0;a<x;a++)
            {
                if(arr[a]==q){
                    cou++;
                }
            }
            cout<<cou<<endl;
        }
    }
}
