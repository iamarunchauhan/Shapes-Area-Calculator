#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>

void init()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
}


void graphCircle(int r)
{
 init();
 setcolor(YELLOW);
 setbkcolor(RED);

 outtextxy((getmaxx()/2)-75,20,"CIRCLE");

 circle(getmaxx()/2,getmaxy()/2,r);

 getch();
 cleardevice();
 closegraph();
}


void graphTriangle()
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-150,20,"TRIANGLE");



 line(250,100,100,300);
 line(250,100,400,300);
 line(100,300,400,300);

 getch();
 cleardevice();
 closegraph();
}

void graphSquare()
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-100,20,"SQUARE");

 rectangle(200,150,400,350);

 getch();
 cleardevice();
 closegraph();
}

void graphRectangle()
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-150,20,"RECTANGLE");

 rectangle(100,150,500,350);

 getch();
 cleardevice();
 closegraph();
}

void graphEllipse(int r1, int r2)
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-100,20,"ELLIPSE");

 ellipse(getmaxx()/2,getmaxy()/2,0,360,r1,r2);

 getch();
 cleardevice();
 closegraph();
}

void graphllgm()
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-150,20,"PARALLELOGRAM");

 line(200,150,450,150);
 line(200,150,160,350);
 line(450,150,410,350);
 line(160,350,410,350);

 getch();
 cleardevice();
 closegraph();
}

void graphTrapezium()
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-130,20,"TRAPEZIUM");

 line(200,150,400,150);
 line(200,150,150,350);
 line(400,150,450,350);
 line(150,350,450,350);

 getch();
 cleardevice();
 closegraph();
}

void graphCylinder()
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-120,20,"CYLINDER");

 ellipse(300,150,0,360,70,30);
 ellipse(300,350,0,360,70,30);

 line(370,150,370,350);
 line(230,150,230,350);

 getch();
 cleardevice();
 closegraph();
}

void graphSphere(int r)
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-80,20,"SPHERE");
 circle(getmaxx()/2,getmaxy()/2,r);

 getch();
 cleardevice();
 closegraph();
}

void graphHemiSphere()
{
 init();
  setcolor(YELLOW);
 setbkcolor(RED);
 outtextxy((getmaxx()/2)-150,20,"HEMI SPHERE");

 ellipse(300,200,0,360,150,20);
 ellipse(300,200,180,360,150,160);

 getch();
 cleardevice();
 closegraph();
}
