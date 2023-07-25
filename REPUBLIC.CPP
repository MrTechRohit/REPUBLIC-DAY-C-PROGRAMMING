/**************************** HAPPY REPUBLIC DAY **************************/
//__________ WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL  ______________//
//____________ C++ PROGRAM TO CREATE REPUBLIC DAY WISHES __________________//


#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver=DETECT,gmode;
int x,y;
initgraph(&gdriver,&gmode,"c:\\tc\\bgi");

setcolor(WHITE);
//____Flag Rectangle
setfillstyle(SOLID_FILL,LIGHTRED);
rectangle(200,50,450,100);
floodfill(201,51,WHITE);

setfillstyle(SOLID_FILL,WHITE);
rectangle(200,100,450,150);
floodfill(201,101,WHITE);

setcolor(15);
setfillstyle(SOLID_FILL,GREEN);
rectangle(200,150,450,200);
floodfill(201,151,WHITE);

//----ASHOKA CHAKRA--------//
setcolor(BLUE);
circle(325,125,23);
for(int i=0;i<=360;i+=15)
{
x=20*sin(i*3.14/180);
y=20*cos(i*3.14/180);
line(325,125,325-x,125+y);
}

//flag pole
setcolor(15);
setfillstyle(SOLID_FILL,YELLOW);
rectangle(195,50,200,430);
floodfill(196,51,WHITE);

//-----Ground----------//
setcolor(15);
setfillstyle(SOLID_FILL,BROWN);
rectangle(170,430,220,450);
floodfill(171,431,WHITE);

setfillstyle(SOLID_FILL,BROWN);
rectangle(140,450,250,480);
floodfill(141, 451,WHITE);

setcolor(LIGHTRED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(270,240,"26");

setcolor(LIGHTGREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
outtextxy(300,240,"JANUARY");

setcolor(LIGHTRED);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(280,270,"HAPPY");
delay(350);

setcolor(WHITE);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(260,320,"REPUBLIC");
delay(350);

setcolor(GREEN);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
outtextxy(300,370,"DAY");
delay(350);

setcolor(YELLOW);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
outtextxy(260,450,":- ROHIT TECH STUDY");

getch();
closegraph();
}