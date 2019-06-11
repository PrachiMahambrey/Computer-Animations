#include"stdio.h"
#include"conio.h"
#include"graphics.h"

void main()
{
int gd=DETECT, gm=DETECT;
int i=0,j,k=0,c;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
while(k<=1)
{
for(i=0;i<=30;i=i+5) {
cleardevice();
line(0,250,700,250);    //road
circle(154,209,7);     //head
line(154,216,154,235);  //body line
line(154,221,170,209);  //holding hand
line(154,221,140,234);  //lower hand
setfillstyle(SOLID_FILL,CYAN);
floodfill(320+i,244,WHITE);
line(154,235,140,249);  //leg1
line(154,235,168,249);  //leg2
line(170,209,285+i,138); //thread

//kite
line(250+i,100,288+i,65);
line(250+i,100,288+i,135);
line(288+i,65,326+i,100);
line(326+i,100,288+i,135);

line(288+i,68,288+i,132);
line(252+i,100,323+i,100);
setfillstyle(SOLID_FILL,RED);
floodfill(268+i,95,WHITE);
//kite tails
line(288+i,135,277+i,150);
line(288+i,135,288+i,150);
line(288+i,135,299+i,150);
setfillstyle(SOLID_FILL,CYAN);
floodfill(10,40,WHITE);
setfillstyle(SOLID_FILL,GREEN);
floodfill(10,270,WHITE);
delay(100);
}

for(j=30;j<=100;j=j+5) {
cleardevice();
line(0,250,700,250);    //road
circle(154,209,7);      //head
line(154,216,154,235);  //body line
line(154,221,170,209);  //holding hand
line(154,221,140,234);  //lower hand
setfillstyle(SOLID_FILL,CYAN);
floodfill(320-j,244,WHITE);
line(154,235,140,250);  //leg1
line(154,235,168,250);  //leg2
line(170,209,285-j,138);//thread

//kite
line(250-j,100,288-j,65);
line(250-j,100,288-j,135);
line(288-j,65,326-j,100);
line(326-j,100,288-j,135);

line(288-j,68,288-j,132);
line(252-j,100,323-j,100);

setfillstyle(SOLID_FILL,RED);
floodfill(268-j,95,WHITE);

//kite tails
line(288-j,135,277-j,150);
line(288-j,135,288-j,150);
line(288-j,135,299-j,150);
setfillstyle(SOLID_FILL,CYAN);
floodfill(10,40,WHITE);
setfillstyle(SOLID_FILL,GREEN);
floodfill(10,270,WHITE);
delay(100);
}
k++;
}
getch();
closegraph();
}

