#include<iostream>
#include<graphics.h>
using namespace std;

void lineBres(int xa, int xb,int ya,int yb)
{
    int dx = abs(xa-xb), dy = abs(ya-yb);
    int p=2*dy-dx;
    int twoDy = 2 * dy, twoDyDx=2*(dy-dx);
    int x,y,xEnd;

    if(xa>xb)
    {
        x=xb;
        y=yb;
        xEnd = xa;
    }
    else
    {
        x=xa;
        y=yb;
        xEnd = xb;
    }
    initwindow(2000,1000);
    putpixel(x,y,WHITE);
    while(x<xEnd)
    {
        x++;
        if(p<0)
            p+=twoDy;
        else
        {
            y++;
            p+=twoDyDx;
        }
        putpixel(x,y,WHITE);
    }
    system("pause");
}


int main()
{
    int x1,x2,y1,y2;
    cout<<"Enter co-ordinates of point 1 (x1 and x2) : ";
    cin>>x1>>y1;
    cout<<"Enter co-ordinates of point 2 (y1 and y2) : ";
    cin>>x2>>y2;
    lineBres(x1,x2,y1,y2);
}
