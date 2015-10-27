#include<iostream>
using namespace std;
int main()
{
    int pos,temp,t,n,c=0,sum=0,take=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        //cout<<"sum="<<sum;
        if(sum==0)
        {
            cout<<(n/2)+1<<endl;

        }
        else{
        c=0;
        while(take<=sum-take)
        {
            temp=arr[0];
            pos=0;
            for(int i=0;i<n;i++)
            {
                if(temp<arr[i])
                {
                    temp=arr[i];

                    pos=i;
                    //cout<<c<<" "<<temp<<" "<<pos;
                }
            }
            c++;

            take+=temp;

            arr[pos]=0;

        }
        cout<<c<<endl;
    }
    }
}
