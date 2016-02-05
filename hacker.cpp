#include<bits/stdc++.h>
using namespace std;
bool compare(const pair<char, int>&i, const pair<char, int>&j)
{
    return i.second > j.second;
}
int main()
{
    long long t,l,j=0;
    char ch;
    int f;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>l;
        vector<pair<char,int>> v;
        for(int i=0;i<l;i++)
        {
            cin>>ch>>f;
            v.push_back(make_pair(ch,f));
        }
        sort(v.begin(),v.end(),compare);

        cin>>s;
        j=0;
        for(int i=0;i<s.length();i++)
        {

            if(j==l-1)
            {
                cout<<v[j].first;
                j=0;
            }
            if(s[i]=='0')
            {
                cout<<v[j].first;
                j=0;
            }
            if(s[i]=='1')
            {
                j++;
            }
        }
        cout<<endl;
    }
}
