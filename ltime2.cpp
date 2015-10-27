#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> mystack;
    long long t,n,d,x=0,y,j,answer=0;
    cin>>t;
    while(t--)
    {
        x=0;
        cin>>n>>d;
        for(int i=0;i<n;i++)
        {
            mystack.push(d*pow(10,i));
        }
        while (!mystack.empty())
        {
            cout<<mystack.top()<<" ";
            mystack.pop();
        }
        /*.y=x*x;
        while(y>0)
        {
            mystack.push(y%10);
            y/=10;
        }
        j=0;
        while (!mystack.empty())
        {
            answer+=(int)pow(23,j)*mystack.top();
            j++;
            mystack.pop();
        }
        cout<<answer%1000000007<<endl;*/
    }
}
