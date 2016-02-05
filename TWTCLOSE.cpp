#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k,c,j;
    string str;
    cin>>n>>k;
    bool arr[n];
    fill_n(arr,n,0);
    while(k--)
    {
        c=0;
        cin>>str;
        if(str=="CLOSEALL")
        {
            fill_n(arr,n,0);
        }
        else{
            cin>>j;
            if(arr[j-1]==0)
            arr[j-1]=1;
            else
            arr[j-1]=0;
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]==1)
                c++;
        }
        cout<<c<<endl;
    }
}
