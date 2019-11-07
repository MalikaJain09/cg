#include<iostream.h>
#include<conio.h>
#include<graphics.h>

void boundaryFill(int x, int y, int fc,int bc)
{
       if(getpixel(x, y) != bc && getpixel(x, y) != fc)
       {
		putpixel(x, y, fc);

		boundaryFill(x + 1, y, fc, bc);
		boundaryFill(x, y + 1, fc, bc);
		boundaryFill(x - 1, y, fc, bc);
		boundaryFill(x, y - 1, fc, bc);
    }

}
int main()
{

  int gd = DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
  int bc ,fc;
  outtextxy(120,100,"jasmanjot singh");
  outtextxy(120,110,"1706448");
  bc = 4;
  int seedx = 300,seedy =250 ;
  settextstyle(4,0,2);
  outtextxy(10,10,"Name Rollno");
  setcolor(bc);
rectangle(100,130,200,200);
cout<<"Enter the fill color in\nrange 0 to 15(other than 4) :";
cin>>fc;
/*comment this line and uncomment the lines below in case of err(jugaad)*/boundaryFill(seedx,seedy,fc,bc);
//setfillstyle(1,fc);
//floodfill(120,140,4);
getch();
closegraph();
}

