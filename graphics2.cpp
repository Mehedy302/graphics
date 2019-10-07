#include<Windows.h>
#include<graphics.h>
#include<time.h>
#include <unistd.h>

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    int i,j,k,t;
    for(t=1;t<=20;t++)
    {

        setcolor(GREEN);
        line(rand()%400,rand()%400,rand()%400,rand()%400);

        usleep(999999);
        cleardevice();

        setcolor(RED);
        line(rand()%500,rand()%500,rand()%500,rand()%500);

        usleep(999999);
        cleardevice();

        setcolor(BLUE);
        line(rand()%400,rand()%500,rand()%400,rand()%500);

        usleep(999999);
        cleardevice();





        setcolor(GREEN);
        line(rand()%400,rand()%400,rand()%400,rand()%400);



        setcolor(RED);
        line(rand()%500,rand()%500,rand()%500,rand()%500);



        setcolor(BLUE);
        line(rand()%400,rand()%500,rand()%400,rand()%500);

        usleep(999999);

        cleardevice();




    }

    getch();

    closegraph();


}
