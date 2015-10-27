# include <bits/stdc++.h>
using namespace std;
map<long long int,long long int> table;

auto fib_n(long long int n) -> long long int
{
    if(table.find(n) != end(table))
    {
        return table[n];
    }
    else
        return table[n] = fib_n(n-1) + fib_n(n-2);
}

bool is_fib(long long int n)
{
    for(long long int i=0;i<10000;i++)
    {
        if(table[i]==n)
        {
            return true;
            break;
        }
    }
    return false;
}
auto main() -> int
{
table[0] = 0;
table[1] = 1;
long long int t,n,c,k=0;;
cin>>t;
auto y = fib_n(10000);
cout<<"First five values \n";
for(int i=0;i<5;i++)cout<<table[i]<<" ";cout<<endl;
while(t--)
{
    k=c=0;
    cin>>n;

    for(long long int i=1;i<10000;i++)
    {
        if(is_fib(i))
        {
            continue;
        }
        else
        {
           // cout<<i<<endl;
            c++;
            if(c==n)
            {
                cout<<i<<endl;
                k++;
                break;
            }

        }
    }
    if(k==0)
    {
        cout<<"OUT OF BPUNF";
    }
}
}
