
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include <math.h>
#include<iostream.h>
int a1,a2,b1,b2,c1,c2;

void rotate(int theeta)
{
     int aa1,aa2,bb1,bb2,cc1,cc2;
     float theeta_radians=theeta*3.14f/180;

     if(theeta>0)
     {

	aa1 = a1*cos(theeta_radians) - a2*sin(theeta_radians);
	aa2 = a1*sin(theeta_radians) + a2*cos(theeta_radians);

	bb1 = b1*cos(theeta_radians) - b2*sin(theeta_radians);
	bb2 = b1*sin(theeta_radians) + b2*cos(theeta_radians);

	cc1 = c1*cos(theeta_radians) - c2*sin(theeta_radians);
	cc2 = c1*sin(theeta_radians) + c2*cos(theeta_radians);




	setcolor(RED);
	line(aa1,aa2,bb1,bb2);
	line(bb1,bb2,cc1,cc2);
	line(cc1,cc2,aa1,aa2);

  }
  else if(theeta<0)

  {
	aa1 = a1*cos(theeta_radians)  +	a2*sin(theeta_radians);
	aa2 = -a1*sin(theeta_radians) + a2*cos(theeta_radians);

	bb1 = b1*cos(theeta_radians)  + b2*sin(theeta_radians);
	bb2 = -b1*sin(theeta_radians) + b2*cos(theeta_radians);

	cc1 = c1*cos(theeta_radians)  + c2*sin(theeta_radians);
	cc2 = -c1*sin(theeta_radians) + c2*cos(theeta_radians);

	 setcolor(RED);
	line(aa1,aa2,bb1,bb2);
	line(bb1,bb2,cc1,cc2);
	line(cc1,cc2,aa1,aa2);

  }

       //	line(a1,a2,b1,b2);
       //	line(b1,b2,c1,c2);
       //	line(c1,c2,a1,a2);


}


void scale(int sx,int sy)
{
setcolor(RED);

	line(a1*sx,a2*sy,b1*sx,b2*sy);
	line(a1*sx,a2*sy,c1*sx,c2*sy);
	line(b1*sx,b2*sy,c1*sx,c2*sy);


}
void translate(int tx,int ty)
{
   //cleardevice();
   setcolor(RED);
	 line(a1+tx,a2+ty,b1+tx,b2+ty);
	line(a1+tx,a2+ty,c1+tx,c2+ty);
	line(b1+tx,b2+ty,c1+tx,c2+ty);


}

void name()
{
outtextxy(400,400,"jasmanjot singh");
outtextxy(400,420,"1706448");
}
void main()
{

	int gd = DETECT, gm;
	initgraph(&gd, &gm, "c:\\turboc3\\bgi");
	name();


	cout<<"enter co-ordinates for 3 vertices of triangle" ;
	cout<<endl;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;

	line(a1,a2,b1,b2);
	line(a1,a2,c1,c2);
	line(b1,b2,c1,c2);
	int choice;
	cout<<"enter 1 for translation,2 for scaling,3 for rotation";
	cin>>choice;

	if(choice==1)
	   {   int tx,ty;
	      cout<<"enter the translation factor- tx and ty";
	      cin>>tx>>ty;
	      translate(tx,ty);

	   }

	   if(choice==2)
	   {
	     int sx,sy;
	     cout<<"enter sx and sy";
	     cin>>sx>>sy;
	     scale(sx,sy);

	   }
	   if(choice==3)
	   {
	     int theeta ;
	     cout<<"enter angle in degrees ( in int,in degrees)";
	     cin>>theeta;
	     rotate(theeta);

	   }

	getch();

}