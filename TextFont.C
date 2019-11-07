// C program to print
// message as colored characters
#include<stdio.h>
#include<graphics.h>
#include<dos.h>

// function for printing
// message as colored character
void printMsg()
{
    // auto detection
    int gdriver = DETECT,gmode,i;

    // initialize graphics mode
    initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");
    outtextxy(60,20,"MALIKA JAIN");
    outtextxy(60,40,"1706465");


    for (i=0; i<11; i++)
    {
	// setcolor of cursor
	setcolor(i);

	// set text style as
	// settextstyle(font, orientation, size)
	settextstyle(i,0,4);

	// print text at coordinate x,y;
	outtextxy(160,40*i,"Computer Graphics");

	delay(500);
    }
    delay(2000);
}
int main()
{
    printMsg();
    return 0;
}