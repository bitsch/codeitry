#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long n,t,c;
    cin>>n;
    while(n--)
    {
        cin>>t;
        c=0;
        for(int i=0;i<50;i++)
        {
            if(t==pow(2,i))
            {
                cout<<"YOLO"<<endl;
                c=1;;
            }
        }

        if(c==0)
        {
            cout<<"MANDOWN"<<endl;
        }

    }
    return 0;
}
