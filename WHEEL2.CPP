#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
int l = 1;
void name()
{
outtextxy(280,20,"jasmanjot singh");
outtextxy(320,30,"1706448");
}

void border()
{
line(0,0,0,getmaxy());
line(0,0,getmaxx(),0);
line(0,getmaxy(),getmaxx(),getmaxy());
line(getmaxx(),0,getmaxx(),getmaxy());
}
void ddaline(int x1, int y1, int x2, int y2) {
	int s, dx, dy, m;
	float xi, yi, x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	if (abs(dx) > abs(dy))
		s = abs(dx); else
		s = abs(dy);
	xi = dx / (float) s;
	yi = dy / (float) s;
	x = x1;
	y = y1;
	putpixel(x1 , y1, 15);
	for (m = 0; m < s; m++) {
		x += xi;
		y += yi;
		putpixel(x, y, 15);
	}
}
void plotpoints1(int x, int y, int cx, int cy) {
	putpixel(cx + x, cy + y, 15);
	putpixel(cx - x, cy - y, 15);
	putpixel(cx - y, cy + x, 15);
	putpixel(cx + y, cy - x, 15);


}
void plotpoints2(int x, int y, int cx, int cy,int rad) {
	putpixel(cx - x, cy + y, 15);
	putpixel(cx + x, cy - y, 15);
	putpixel(cx + y, cy + x, 15);
	putpixel(cx - y, cy - x, 15);
	if(l==0)
	{

	ddaline(cx,cy,cx,cy-rad)   ;
	ddaline(cx,cy,cx,cy+rad)   ;
	ddaline(cx,cy,cx+rad,cy)   ;
	ddaline(cx,cy,cx-rad,cy)   ;


	ddaline(cx,cy,cx+rad*(1/sqrt(2)),cy+rad*(1/sqrt(2)))   ;
	ddaline(cx,cy,cx-rad*(1/sqrt(2)),cy+rad*(1/sqrt(2)))   ;
	ddaline(cx,cy,cx+rad*(1/sqrt(2)),cy-rad*(1/sqrt(2)))   ;
	ddaline(cx,cy,cx-rad*(1/sqrt(2)),cy-rad*(1/sqrt(2)))   ;

	 l=1;
	 }
}
void mcircle(int cx, int cy, int r) {
	int x = 0, y, p;
	y = r;
	p = 1 - r;
	while (x < y)
	{
		plotpoints1(x, y, cx, cy);
		x++;
		if (p < 0)
		   p += 2 * x + 1;
		else
		{
		   y--;
		   p += 2 * (x - y) + 1;
		}
	}
	x = y + 1;
	while (abs(x) > 0) {
		plotpoints2(x, y, cx, cy,r);
		x--;
		if (p >= 0)
			    p = p - 2 * x - 1; else {
			y++;
			p = p - 2 * (x - y) - 1;
		}
	}
}
void main() {
	int gd = DETECT, gm = DETECT;
	int i = 0;

	initgraph(&gd, &gm, "c:\\turboc3\\bgi");


	while (!kbhit()) {
		if (i > 640)
			    i = -200;
		cleardevice();
		name();
		border();

		l=0  ;
		mcircle(100 + (i++), 200, 100);
		delay(700);
		i+=30;
	}
	getch();
}