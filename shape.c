/* Program to draw a rectangle using C graphic support */
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
int main() /* Main function begins */
{
     /* Declare the graphic variables */
     int gdriver, gmode, userpattern;
     int left, right, top, bottom;
     /* Initialize the graphic driver to autodetect the graphic drivers */
     gdriver = DETECT;
     userpattern = 1;
     /* Initialization of graph and path set to graphic interface */
     initgraph(&gdriver, &gmode, "D:\\TURBOC3\\BGI");
     /* Set the line style */
     setlinestyle(SOLID_LINE,userpattern,3);
     /* Draw the line */
     left = 100;
     top = 80;
     bottom = 220;
     right = 350;
     rectangle(left, top, right, bottom);
     /* close the graph */
     getch();
     closegraph();
     return 0;
}