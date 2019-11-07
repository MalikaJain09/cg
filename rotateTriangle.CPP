#include<iostream.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
 int round(float f)
 {
 return f>0?(f+0.5):f-0.5;
 }
int main()
{   int gd = DETECT,gm;
    initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  //  initwindow(800,800);
    int x1=200,y1=100,x2=100,y2=250,x3=300,y3=250;
    int arr[]={x1,y1,x2,y2,x3,y3,x1,y1};

    outtextxy(70,70,"jasmanjot singh");
    outtextxy(90,90,"1706448");
    drawpoly(4,arr);
    double a;
    cout<<"Enter the angle for rotation : "<<endl;
    cin>>a;
    int rx1,rx3,ry1,ry3;
    a = (a*3.14)/180;
    double  mx = x2;
    double my = y2;
    rx1 =  round(mx + (x1 - mx)*cos(a) - (y1 - my)*sin(a));
    ry1 =  round(my + (x1 - mx)*sin(a) + (y1 - my)*cos(a));
    rx3 =  round(mx + (x3 - mx)*cos(a) - (y3 - my)*sin(a));
    ry3 =  round(my + (x3 - mx)*sin(a) + (y3 - my)*cos(a));
    int arr1[]={rx1,ry1,x2,y2,rx3,ry3,rx1,ry1};
    drawpoly(4,arr1);
    getch();
    closegraph();
    return 0;
}
