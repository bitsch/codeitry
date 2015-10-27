#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>s;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='?')
            {
                for(int j=0;j<n;j++)
                {
                    if(s[j-1]!=j&&s[j+1]!=j)
                        s[j]=j;
                }
            }



        }
        for(int i=0;i<s.length();i++)
            cout<<s[i];

    }
}
