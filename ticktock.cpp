#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,s1,h2,m2,s2,t,h,m,s;
    char ch;
    cin>>t;
    while(t--)
    {
        cin>>h1>>ch>>m1>>ch>>s1>>h2>>ch>>m2>>ch>>s2;
        if(s2<s1)
        {
            s2+=60;
            m2-=1;
        }
        s=s2-s1;
        if(m2<m1)
        {
            m2+=60;
            h2-=1;
        }
        m=m2-m1;
        if(h2<h1)
        {
            h2+=24;
 
        }
        h=h2-h1;
        cout<<h<<" HOURS "<<m<<" MINUTES "<<s<<" SECONDS"<<endl;
    }
    return 0;
}