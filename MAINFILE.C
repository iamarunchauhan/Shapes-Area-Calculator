#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include"anotherfilecalculator.c"

void cir(void);
void triangle(void);
void square(void);
void rectan(void);
void ell(void);
void parallelogram(void);
void trapezium(void);
void cylinder(void);
void sphere(void);
void hemisphere(void);


void main()
{
 char choice;
 char ch;

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"C:\\TC\\BGI");

// clrscr();
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
 setbkcolor(YELLOW);
 setcolor(RED);
 outtextxy((getmaxx()/2)-90,(getmaxy()/2)-40,"WELCOME");
 getch();
 closegraph();
textcolor(YELLOW);
textbackground(RED);
while(1==1)
 {
 clrscr();
 printf("\n\n");
 printf("\n  ||--------------------------------------||");
 printf("\n  ||     Main Menu of Area Calculator     ||");
 printf("\n  ||--------------------------------------||");
 printf("\n  ||                                      ||");
 printf("\n  ||   Press 1  -- CIRCLE                 ||");
 printf("\n  ||   Press 2  -- TRIANGLE               ||");
 printf("\n  ||   Press 3  -- SQUARE                 ||");
 printf("\n  ||   Press 4  -- RECTANGLE              ||");
 printf("\n  ||   Press 5  -- ELLIPSE                ||");
 printf("\n  ||   Press 6  -- PARALLELOGRAM          ||");
 printf("\n  ||   Press 7  -- TRAPEZIUM              ||");
 printf("\n  ||   Press 8  -- CYLINDER               ||");
 printf("\n  ||   Press 9  -- SPHERE                 ||");
 printf("\n  ||   Press $  -- HEMISPHERE             ||");
 printf("\n  ||   Press #  -- EXIT                   ||");
 printf("\n  ||                                      ||");
 printf("\n  ||--------------------------------------||");
 printf("\n  ||        Enter ur choice :             ||");
 printf("\n  ||--------------------------------------||");
 fflush(stdin);
 choice = getch();

switch(choice)
{
 case '1':
  clrscr();
  cir();
   break;

 case '2' :
	 clrscr();
	 triangle();
	 break;

 case '3' :
	 clrscr();
	 square();
	 break;

 case '4' :
	 clrscr();
	 rectan();
	 break;

 case '5' :
	 clrscr();
	 ell();
	 break;

 case '6' :
	 clrscr();
	 parallelogram();
	 break;

 case '7' :
	 clrscr();
	 trapezium();
	 break;

 case '8' :
	  clrscr();
	 cylinder();
	 break;

 case '9' :
	 clrscr();
	 sphere();
	 break;

 case '$' :
	  clrscr();
	  hemisphere();
	  break;
 case '#':
	exit(0);
	break;
 default :
  printf("Wrong Choice ");
}// end of switch
getch();
} // end of while
// end of prog head
}

	     /*  Functions Definitions  */

void cir()
{
 float r, cirf,area;
 char ch;

 printf("\n\n");
 printf("\t\t\t   CIRCLE");
 printf("\n\n");
 printf("\n|||>Enter the Radius of a CIRCLE : ");
 scanf("%f",&r);
 if(r<0) { printf("\n\nNegative value is not allowed."); return; }
 printf("\n\n");
 printf("/// Geometry Detail's\n");
 printf("\n\n");
 cirf= 2 * 3.14 * r;
 printf("-#= Circumference for the circle having radius %f is %f m",r,cirf);
 printf("\n\n");
 area= 3.14 * r *r;
 printf("\n-##= AREA for the circle having radius %f is %f m^2",r,area);
 printf("\n\nOTHER OPTION :\n");
 printf("\n**__Press v to view the circle having %f radius__**",r);

 fflush(stdin);
 ch = getch();
 if(ch == 'v')
 {
  graphCircle(r);
 }
}


void triangle()
{
float b,h,triangle;
char ch;

printf("\n\n");
printf("\t\t\t  TRIANGLE ");
printf("\n\n");

printf("\n |||>> Enter the base of TRIANGLE : ");
scanf("%f",&b);
printf("\n\n");
printf("\n |||>> Enter the height of TRIANGLE : ");
scanf("%f",&h);
printf("\n");

if(b<0 || h<0) { printf("\n\nNegative value is not allowed."); return; }

triangle = 0.5 * b * h ;
printf("\n\n-##= The area of TRIANGLE is : %f m^2 ", triangle);

printf("\n\n OTHER OPTION :");
printf("\n**__Press v to view the shape of Triangle__**");

 fflush(stdin);
 ch=getch();

 if(ch == 'v')
 {
  graphTriangle();
 }
}

void square()
{
float a, square;
char ch;

printf("\n\n");
printf("\t\t\t SQUARE ");
printf("\n\n");

printf("\n|||>> Enter the side of SQUARE : ");
scanf("%f",&a);

if(a<0) { printf("\n\nNegative value is not allowed."); return; }

square= a * a ;
printf("\n\n-##= The area of SQUARE is : %f m^2", square);

printf("\n\n OTHER OPTION : ");
printf("\n**__ Press v to view the shape of Square__**");

 fflush(stdin);
 ch=getch();
 if(ch == 'v')
 {
  graphSquare();
 }

}


void  rectan()
{
float l,b,rectangle;
char ch;
printf("\n\n");
printf("\t\t\t RECTANGLE ");
printf("\n\n");

printf("\n |||>>  Enter the length of RECTANGLE : ");
scanf("%f",&l);

printf("\n |||>>  Enter the breadth of RECTANGLE : ");
scanf("%f",&b);

if(l<0 || b<0) { printf("\n\nNegative value is not allowed."); return; }

rectangle= l * b;
printf("\n -##=  The area of rectangle is : %f m^2 ",rectangle);
printf("\n\nOTHER OPTION :");
printf("\n**__ Press v to view the shape of Rectangle __**");

 fflush(stdin);
 ch=getch();
 if(ch=='v')
 {
  graphRectangle();
 }
}

void ell()
{
float r1,r2,ellipse;
char ch;

printf("\n\n");
printf("\t\t\t ELLIPSE ");

printf("\n\n|||>> Enter semimajor axis of ELLIPSE : ");
scanf("%f",&r1);

printf("\n|||>> Enter semiminor axis of ELLIPSE : ");
scanf("%f",&r2);

if(r1<0 || r2<0) { printf("\n\nNegative value is not allowed."); return; }

ellipse = 3.14 * r1 * r2;
printf("\n\n-##= The area of ELLIPSE is : %f m^2",ellipse);
printf("\n\n OTHER OPTION :");
printf("\n**__Press v to view the shape of Ellipse__**");

 fflush(stdin);
 ch=getch();

 if(ch=='v')
 {
  graphEllipse(r1,r2);
 }
}


void parallelogram()
{
float b,h,llgm;
char ch;
printf("\n\n");
printf("\t\t\t PARALLELOGRAM ");
printf("\n");

printf("\n|||>> Enter the base of PARALLELOGRAM : ");
scanf("%f",&b);

printf("\n|||>> Enter the height of PARALLELOGRAM : ");
scanf("%f",&h);

if(b<0 || h<0) { printf("\n\nNegative value is not allowed."); return; }

llgm = b*h;
printf("\n\n-##= The area of PARALLELOGRAM is : %f m^2 ",llgm);
printf("\n\n OTHER OPTION :");
printf("\n**__Press v to view the shape of Parallelogram __**");

 fflush(stdin);
 ch = getch();

 if(ch=='v')
 {
  graphllgm();
 }

}



void trapezium()
{
float b1,b2,h,trapezium;
char ch;

printf("\n\n");
printf("\t\t\t TRAPEZIUM ");
printf("\n");
printf("\n|||>> Enter the TRAPEZIUM'S base 1 : ");
scanf("%f",&b1);

printf("\n|||>> Enter the TRAPEZIUM'S base 2 : ");
scanf("%f",&b2);

printf("\n|||>> Enter the height of TRAPEZIUM : ");
scanf("%f",&h);

if(b1<0 || b2<0 || h<0) { printf("\n\nNegative value is not allowed."); return; }

trapezium = h * (b1+b2)/2;
printf("\n-##= The area of TRAPEZIUM is : %f m^2 ",trapezium);
printf("\n");
printf("\n\nOTHER OPTION :");
printf("\n**__Press v to view the shape of Trapezium__**");

 fflush(stdin);
 ch = getch();
 if(ch=='v')
 {
  graphTrapezium();
 }
}

void cylinder()
{
float r,h,cylinder;
char ch;
printf("\n\n");
printf("\t\t\t CYLINDER ");

printf("\n\n|||>> Enter the height of CYLINDER : ");
scanf("%f",&h);

printf("\n\n|||>> Enter the radius of CYLINDER : ");
scanf("%f",&r);

if(r<0 || h<0) { printf("\n\nNegative value is not allowed."); return; }

cylinder= 2 * 3.14 * r * (h+r);
printf("\n\n-##= The area of CYLINDER is: %f m^2 ",cylinder);
printf("\n\n");
printf("\nOTHER OPTION :");
printf("\n**__Press v to view the shape of Cylinder__**");

 fflush(stdin);
 ch = getch();

 if(ch == 'v')
 {
  graphCylinder();
 }

}


void sphere()
{
float r,sphere;
char ch;
printf("\n\n");
printf("\t\t\t SPHERE ");

printf("\n\n|||>> Enter the radius of SPHERE : ");
scanf("%f",&r);

if(r<0) { printf("\n\nNegative value is not allowed."); return; }

sphere= 4 * 3.14 * r * r;
printf("\n\n-##= The area of SPHERE is : %f m^2  ",sphere);
printf("\n\n");
printf("\n\n OTHER OPTION :");
printf("\n**__Press v to view the shape of Sphere formed__**");

 fflush(stdin);
 ch = getch();

 if(ch=='v')
 {
  graphSphere(r);
 }

}


void hemisphere()
{
float r,hemisphere;
char ch;
printf("\n\n");
printf("\t\t\t HEMISPHERE ");

printf("\n\n|||>> Enter the radius of HEMISPHERE : ");
scanf("%f",&r);

if(r<0) { printf("\n\nNegative value is not allowed."); return; }

hemisphere= 3 * r * r;
printf("\n\n-##= The area of HEMISPHERE : %f m^2 ",hemisphere);
printf("\n\n");
printf("\nOTHER OPTION :");
printf("\n**__Press v to view the shape of Hemi Sphere__**");
fflush(stdin);
ch = getch();
if(ch=='v')
{
 graphHemiSphere();
}
}