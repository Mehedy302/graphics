#include <graphics.h>

//driver code
int main()
{

    int gd = DETECT, gm;

    initgraph(&gd, &gm, "");

    setcolor(GREEN);

    circle(300, 200, 100);
    int arr[100] ={300,250,300,450,500,450,500,250,300,250};

    setcolor(BLUE);
    drawpoly(5,arr);
   int arr2[100]={130,200,270,200,200,0,130,200};

    setcolor(RED);
    drawpoly(4, arr2);

    getch();

    closegraph();

    return 0;
}
