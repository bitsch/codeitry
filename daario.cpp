#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t,m,n,a,sum;
	scanf("%ll",&t);
	while(t--)
	{
		scanf("%ll,%ll",&m,&n);
		sum=0;
		for(int i=0;i<m;i++)
		{
			scanf("%ll",&a);
			if(i<n)
			sum+=a;
			else sum-=ceil(a/2);
		}
		if(sum>=0)
		cout<<"VICTORY"<<endl;
		else cout<<"DEFEAT"<<endl;
	}
}
