//Example 12 - c graphics programming

#include <graphics.h>
#include <conio.h>
 
main()
{
    int gd = DETECT, gm;
 
    initgraph(&gd, &gm,"C:\\TC\\BGI");
 
    outtextxy(10,20, "Graphics source code example.");
 
    circle(200, 200, 50);
 
    setcolor(BLUE);
 
    line(350, 250, 450, 50);
 
    getch();
    closegraph( );
    return 0;
}