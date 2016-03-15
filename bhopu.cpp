#include<iostream>
#include<string>
using namespace std;
int main()
{
     string s;
     char msg[8]={'i','l','o','v','e','y','o','u'},k;
     cin>>s;
     for(int i=0;i<s.length();i++)
     {
         char k=s[i];
         for(int j=0;j<=7;j++)
         {
             if(k==msg[j])
             msg[j]='A';
         }
     }
     for(int j=0;j<=7;j++)
         {
             if(msg[j]!='A')
             {
                 cout<<"sad";
                 return 0;
             }

         }
         cout<<"happy";
}
