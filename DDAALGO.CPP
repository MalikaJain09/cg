
#include<graphics.h>
#include<conio.h>
#include<math.h>
#include<dos.h>
#include<stdio.h>
#include<iostream.h>

void dda(int x0,int y0,int x1,int y1)
{
    x0=x0+getmaxx()/2;
    y0=getmaxy()/2-y0;

    x1=x1+getmaxx()/2;
    y1=getmaxy()/2-y1;
    int dx=x1-x0;
    int dy=y1-y0;

    int steps=abs(dx) > abs(dy) ? abs(dx):abs(dy);
    float Xinc = dx / (float) steps;
    float Yinc = dy / (float) steps;


    float X = x0;
    float Y = y0;
    for (int i = 0; i <= steps; i++)
    {
	putpixel (X,Y,RED);
	X += Xinc;
	Y += Yinc;
	delay(10);

    }
}

void main()
{
	int gdriver = DETECT, gmode;
	clrscr();
	initgraph(&gdriver, &gmode, "c:\\turboc3\\bgi");

	 outtextxy(400,400,"jasmanjot singh");
	 outtextxy(400,420,"1706448");

	line(getmaxx()/2,0,getmaxx()/2,getmaxy());
	line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
	int a,b,c,d;
	cout<<"enter starting point:-",endl;
	cout<<endl;

	cin>>a>>b;
	cout<<"enter ending point:-",endl ;
	cout<<endl;
	cin>>c>>d;
	dda(a,b,c,d);


	getch();
	closegraph();
}