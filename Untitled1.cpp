#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int x[500][500]={{0},{0}};

long long check(int n, int r)
{
    if(r==0)
        return 1;
    if(n<r)
        {
        return 0;
    }
    if(x[n][r]!=0)
        return x[n][r];
    return check(n-1,r)+check(n-1,r-1);
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n;
    long long ans;
    cin>>t;
    //fill_n(x,250000,0);
    while(t--)
        {
        cin>>n;
        for(int i=0;i<=n;i++)
            {
            cout<<check(n,i)<<" ";
        }
        cout<<endl;
    }
    return 0;
}
