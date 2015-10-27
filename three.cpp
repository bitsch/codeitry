# include <bits/stdc++.h>
using namespace std;
struct point
{
float a;
float b;
point()
{
    a = 0;
    b = 0;
}
};
auto dist(point &x,point &y)
{
    return sqrt(pow((x.a - y.a),2) + pow((x.b - y.b),2));
}
bool compare(point &x, point &y)
{
    point zr;
    zr.a = numeric_limits<float>::min();
    zr.b = numeric_limits<float>::min();
if(dist(zr,x)<=dist(zr,y))
    return true;
return false;
}

int main()
{
long long  t,n;
cin>>t;
float checker_a = numeric_limits<float>::min();
float checker_b = numeric_limits<float>::min();
for(long long int i=1;i<=t;t++)
{   cin>>n;
    vector<point> plane(n);
    for(auto &p : plane)
    {
    cin>>p.a>>p.b;
    }

sort(begin(plane),end(plane),compare);
cout<<"Case "<<i<<": "<<setprecision(12)<<dist(plane[0],plane[1])+dist(plane[1],plane[2])+dist(plane[2],plane[0]);
}
}
