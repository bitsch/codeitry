#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
bool map[100001];
vector<int> prime;
int c=1;
void sieve(long long m,long long n)
{
    bool mark[n-m+1];
    fill_n(mark,n-m+1,0);
    for(long long i=0;i<c-1;i++)
    {
        int j=m/prime[i];
        int k=m%prime[i];
        if(k!=0)
        {
            j++;
        }
        while(j*prime[i]<=n)
        {
            //cout<<j<<" "<<prime[i]<< " "<<j*prime[i]<<"in loop ";
            mark[j*prime[i]-m]=1;
            j++;
        }
    }
    for(int i=0;i<n-m+1;i++)
    {
        if(mark[i]==0)
            cout<<i+m<<endl;

    }
}
int main() {
	// your code goes here

	fill_n(map,100000,0);

	long long t,m,n,j=2,k;

	for(long long i=2;i<=100000;i++)
	{
		j=2;
		if(map[i]==0){
			prime.push_back(i);
			c++;
		}
		while(i*j<=100000)
		{
			map[i*j]=1;
			j++;
		}

	}
	//cout<<prime[c-2];
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		if(m>100000 || n>100000)
		sieve(m,n);
		else {
            for(int i=0;i<c;i++)
            {
                if(prime[i]>=m && prime[i]<=n)
                {
                    cout<<prime[i]<<endl;
                }
            }
		}
		cout<<endl;
	}
	return 0;
}
