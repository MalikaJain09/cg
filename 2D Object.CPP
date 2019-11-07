#include<conio.h>
#include<iostream.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm;

 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

//line with points x1,y1 and x2,y2
 line(100,200,515,200);          //upper
 line(100,200,72,290);          //left line
 line(72,290,72,390);
 line(515,200,515,390);          //right line
 line(72,390,165,390);          //left down
 line(515,390,455,390);          //right down
 line(215,390,405,390);          //lower center

 rectangle(160,230,225,365);     //Bus Door
 line(192,230,192,365);
 circle(198,300,3);               //Handle
 rectangle(102,210,145,275);     // Main Window
rectangle(260,250,295,290);      //Window1
rectangle(310,250,345,290);      //Window2
 rectangle(360,250,395,290);     //Window3
rectangle(410,250,445,290);      //Window4
rectangle(460,250,495,290);      //Windoe5
outtextxy(280,315,"Guru Nank Dev Engineering");
outtextxy(330,327,"College, Ludhiana");
 circle(190,400,25);             //left circle
 circle(190,400,15);              //inner Left Circle
 circle(430,400,15);              //inner right Circle
 circle(190,400,3);              // inner left dot
 circle(430,400,3);              //outter left dot
 circle(430,400,25);             //right circle

 line(1,150,1500,150);            //road
 line(1,450,1500,450);

 rectangle(420,70,435,150);       //Sign Bord
 rectangle(350,20,500,70);

 rectangle(100,10,220,150);       //Bulding1
 rectangle(220,50,300,150);       //Bulding2
 rectangle(147,110,173,150);      //Door1
 rectangle(245,120,275,150);      //Door2
 rectangle(110,40,150,70);       //Window 1a
 rectangle(170,40,210,70);       //Window 1b
 rectangle(235,70,285,100);       //Window 2a

 outtextxy(355,30,"Malika Jain");
 outtextxy(355,50,"1706465");
getch();
}

