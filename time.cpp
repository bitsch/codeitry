#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
float angle(int h,int m,float x)
{
    float k=(6*m);
    float l=(30.0000*h)+(k/12.0000);
    //cout<< "X="<<x<<"Y="<<y<<endl;
    if(abs(k-l)==x||abs(k-l)==360-x)
    {
        cout <<setfill('0') <<setw (2);
       cout<<h<<":";
       cout <<setfill('0') <<setw (2);
        cout<<m<<endl;
    }
}
int main()
{
    long long t;
    float x;
    cin>>t;
    while(t--)
    {
        cin>>x;
       //  h=0,m=0;
        for(int i=0;i<12;i++)
        {

            for(int j=0;j<60;j++)
            {
                angle(i,j,x);


            }
        }
    }
}
