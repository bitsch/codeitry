#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,y,in,X,q,c=0;
    cin>>t;
    while(t--)
    {
        cin>>y;
        while(y--)
        {
            c=0;
            cin>>in>>X>>q;
            vector<int> game(X+1,in);
            for(long long int n = 1;n<game.size();n++)
            {
                for(long long int k=1;k<=n;k++)
                {

                    if(game[k] == 1)
                        game[k] = 2;
                    else
                        game[k] = 1;
                }

            }

             for(long long int n = 0;n<=game.size();n++)
            {
                if(game[n]==q)
                    c++;
            }
            cout<<c<<endl;
        }
    }
}
