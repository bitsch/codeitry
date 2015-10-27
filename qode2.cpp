#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double  a,b,c,d,e,f, x1,x2,x3 ,x4,x5,x6,y1,y2,y3 ,y4,y5,y6,xy , yx, answer,area;
    cin>>a>>b>>c>>d>>e>>f;
    x1=a;
    y1=0;
    x2=x1+b/2;
    y2=y1+(sqrt(3)*b)/2;
    x3=x2-c/2;
    y3=y2+(sqrt(3)*c)/2;
    x4=x3-d;
    y4=y3;
    x5=x4-e/2;
    y5=y4-(sqrt(3)*e)/2;
    x6=0;
    y6=0;
    xy=(x1*y2)+(x2*y3)+(x3*y4)+(x4*y5)+(x5*y6)+(x6*y1);
    yx=(y1*x2)+(y2*x3)+(y3*x4)+(y4*x5)+(y5*x6)+(y6*x1);
    area=abs(xy-yx)/2;
    //cout<<area<<endl;
    answer=area/(sqrt(3)/4);
    cout<<(int)answer;
    return 0;
}
