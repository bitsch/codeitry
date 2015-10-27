#include<iostream>
using namespace std;
int main()
{
    long long t;
    int L,T,I,M,E;
    string s;

    cin>>t;

    while(t--)
    {
        L=T=I=M=E=0;
        cin>>s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
                L++;
            if(s[i]=='T')
                T++;
            if(s[i]=='I')
                I++;
            if(s[i]=='M')
                M++;
            if(s[i]=='E')
                E++;
        }
        if(L>1 && T>1 && I>1 && M>1 && E>1)
            cout<<"YES"<<endl;
        else if(s.length()==9&&E==1&&L>1 && T>1 && I>1 && M>1 )
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}
