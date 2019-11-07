#include<conio.h>
#include<iostream.h>
#include<graphics.h>

int main()
{
 int gd=DETECT,gm;

 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 setcolor(8);
outtextxy(355,30,"Malika Jain");
 outtextxy(355,50,"1706465");
  putpixel(120, 70, RED);
  putpixel(180,70,BLUE);
  putpixel(120,90,GREEN);
  putpixel(180,90,BLUE);
  putpixel(120, 110, BLUE);
  putpixel(180, 110, BLUE);
  setbkcolor(WHITE);
    getch();
    closegraph();
    return 0; }