#include<iostream.h>
#include<math.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main() {


	int gd = DETECT, gm;

	initgraph(&gd, &gm, "c:\\turboc3\\bgi");

	line(getmaxx() / 2, 0, getmaxx() / 2, getmaxy());
	line(0, getmaxy() / 2, getmaxx(), getmaxy() / 2);

	int dda_arr[100][2], bres_arr[100][2], i = 0, j = 0, l;
	int cx, cy;
	cx = getmaxx() / 2;
	cy = getmaxy() / 2;
	char slope[10];
	int x1, y1, x2, y2;
	int tempx, tempy;
	cout << "\nEnter the initial coordinates of the line: ";
	cin >> x1 >> y1;
	cout << "\nEnter the final coordinates of the line: ";
	cin >> x2 >> y2;
	int Pk;
	tempx = x1;
	tempy = y1;
	bres_arr[i][j++] = x1;
	bres_arr[i++][j--] = y1;
	putpixel(cx + x1, cy - y1, WHITE);
	int dy = y2 - y1;
	int dx = x2 - x1;
	float m = float(dy) / float(dx);
	if (m < 1)
	{
		int change_in_y;
		Pk = (2 * dy) - dx;
		while (tempx != x2 || tempy != y2)
		{
			if (Pk >= 0)
			{
				tempx += 1;
				tempy += 1;
				change_in_y = 1;
			}
			else {
				tempx += 1;
				change_in_y = 0;
			}
			bres_arr[i][j++] = tempx;
			bres_arr[i++][j--] = tempy;
			putpixel(tempx + cx, cy - tempy, 15);
			Pk = Pk + (2 * dy) - (2 * dx*change_in_y);

		}
	}

	else if (m > 1) {

		int change_in_x;
		Pk = (2 * dx) - dy;
		while (tempx != x2 || tempy != y2)
		{
			if (Pk >= 0)
			{
				tempx += 1;
				tempy += 1;
				change_in_x = 1;
			}
			else {
				tempy += 1;
				change_in_x = 0;
			}
			bres_arr[i][j++] = tempx;
			bres_arr[i++][j--] = tempy;
			putpixel(tempx + cx, cy - tempy, 15);
			Pk = Pk + (2 * dx) - (2 * dy*change_in_x);

		}
	}
	else {
		while (tempx != x2 || tempy != y2)
		{
			tempy += 1;
			tempx += 1;
			bres_arr[i][j++] = tempx;
			bres_arr[i++][j--] = tempy;
			putpixel(tempx + cx, cy - tempy, 15);
		}

	}


	float temp1x = x1;
	float temp1y = y1;
	i = 0, j = 0;
	dda_arr[i][j++] = temp1x;
	dda_arr[i++][j--] = temp1y;
	putpixel(temp1x + cx, cy - temp1y, 15);
	while (5>2)
	{
		if (m < 1)
		{
			temp1x += 1;
			temp1y += m;
		}
		else if (m > 1) {
			temp1y += 1;
			temp1x += 1 / m;

		}
		else {
			temp1y += 1;
			temp1x += 1;
		}
		dda_arr[i][j++] = int(temp1x);
		dda_arr[i++][j--] = int(temp1y);
		putpixel(int(temp1x + cx), int(cy - temp1y), 15);
		if (int(temp1x) == x2 && int(temp1y) == y2)
		{
			break;
		}
	}
	l = i - 1;
	cout << "\DDA's points:                   Bresenham's points :\n";
	for (i = 0; i <= l; i++)
	{
		j = 0;
		cout << "(" << dda_arr[i][j] << "," << dda_arr[i][j + 1] << ")\t\t\t\t(" << bres_arr[i][j] << "," << bres_arr[i][j + 1] << ")";
		cout << endl;

	}
	sprintf(slope, "slope = %f", m);
	outtextxy(500, 80, slope);
	setcolor(WHITE);
	settextstyle(4, 0, 2);
	outtextxy(50, 80, "Akshay 1706392");
	getch();
	closegraph();


}
