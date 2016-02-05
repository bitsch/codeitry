#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    bool check[n];
    fill_n(check,n,0);
    if(n==1)
    {
        cout<<"1";
    }
    else{
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]==0)
        {
            check[i]=1;
        }
    }
    for(int i=0;i<n;i++)
    {
        check[arr[i]-1]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(check[i]==0)
        cout<<i+1<<" ";
    }
    }
}
