/* A program to find day of a given date */
#include<bits/stdc++.h>
using namespace std;
int dayofweek(int d, int m, int y)
{
    //cout<<d<<":"<<m<<":"<<y<<" ";
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
/* Driver function to test above function */
int main()
{
    long long t,c,d1,d2,m1,m2,y1,y2;
    cin>>t;
    while(t--)
    {
        c=0;
        cin>>d1>>m1>>y1>>d2>>m2>>y2;
        if(d1>13)
        m1++;
        if(m1>12)
        {
            y1++;
            m1=1;
        }
        while(((y2*365+m2*30+d2)-(y1*365+m1*30+d1))>=0)
        {
            if(dayofweek(13,m1,y1)==5)
            c++;
            m1++;
            if(m1>12)
            {
                y1++;
                m1=1;
            }
        }
        cout<<c<<endl;

    }

    return 0;
}
