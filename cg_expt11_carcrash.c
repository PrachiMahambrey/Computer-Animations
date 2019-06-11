#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<math.h>
#include<dos.h>

void main()
{
 int i,j,gd=DETECT,gm=DETECT;
 initgraph(&gd,&gm,"C://TURBOC3//BGI");

 for(i=0,j=0;i<65,j<65;i=i+5,j=j+5)
 {

  //Ground color
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(8+i,450,WHITE);

 line(0,240,700,240);
 //car1
 setfillstyle(SOLID_FILL,RED);
 floodfill(20+i,205,WHITE);
 circle(50+i,225,15); //tire 1
 circle(200+i,225,15);//tire 2
 line(10+i,210,240+i,210);//line above the tires
 line(10+i,210,10+i,180);
 line(10+i,180,240+i,180);
 line(240+i,210,240+i,180);
 line(10+i,180,60+i,140);
 line(240+i,180,190+i,140);
 line(60+i,140,190+i,140);
 line(60+i,140,60+i,180);
 line(190+i,140,190+i,180);
 line(125+i,140,125+i,180);

 setfillstyle(SOLID_FILL,BLUE);
 floodfill(65+i,150,WHITE);

 setfillstyle(SOLID_FILL,BLUE);
 floodfill(130+i,150,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
 floodfill(51+i,226,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
 floodfill(199+i,226,WHITE);

 setfillstyle(SOLID_FILL,CYAN);
 floodfill(81+i,226,WHITE);

 //car2
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(540-j,205,WHITE);
 circle(400-j,225,15); //tire 1
 circle(550-j,225,15);//tire 2
 line(360-j,210,590-j,210);//line above the tires
 line(360-j,210,360-j,180);
 line(360-j,180,590-j,180);
 line(590-j,210,590-j,180);
 line(590-j,180,530-j,140);
 line(360-j,180,420-j,140);
 line(420-j,140,530-j,140);
 line(420-j,140,420-j,180);
 line(530-j,140,530-j,180);
 line(475-j,140,475-j,180);

 setfillstyle(SOLID_FILL,GREEN);
 floodfill(425-j,150,WHITE);

 setfillstyle(SOLID_FILL,GREEN);
 floodfill(480-j,150,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
 floodfill(402-j,226,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
 floodfill(549-j,226,WHITE);

 setfillstyle(SOLID_FILL,CYAN);
 floodfill(431-j,226,WHITE);

 //sky color
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(8+i,10,WHITE);

 delay(100);
 cleardevice();
}

  //Ground color
  setfillstyle(SOLID_FILL,BROWN);
  floodfill(8,450,WHITE);


line(0,240,700,240);

setfillstyle(SOLID_FILL,RED);
floodfill(20+55,205,WHITE);
 //car1
 circle(50+55,225,15); //tire 1
 circle(200+55,225,15);//tire 2
 line(10+55,210,240+55,210);//line above the tires
 line(10+55,210,10+55,180);
 line(10+55,180,240+55,180);

 //line(240+60,210,240+60,180);->This line broken into the following 2 lines:
 line(240+55,210,220+55,195);//dent
 line(220+55,195,240+55,180);//dent

 line(10+55,180,60+55,140);
 line(240+55,180,190+55,140);
 line(60+55,140,190+55,140);
 line(60+55,140,60+55,180);
 line(190+55,140,190+55,180);
 line(125+55,140,125+55,180);

 setfillstyle(SOLID_FILL,BLUE);
 floodfill(65+55,150,WHITE);

 setfillstyle(SOLID_FILL,BLUE);
 floodfill(130+55,150,WHITE);

setfillstyle(SOLID_FILL,WHITE);
 floodfill(51+55,226,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
 floodfill(199+55,226,WHITE);

 setfillstyle(SOLID_FILL,CYAN);
 floodfill(81+55,226,WHITE);


setfillstyle(SOLID_FILL,YELLOW);
floodfill(355-55,209,WHITE);


//car2
 circle(400-55,225,15); //tire 1
 circle(550-55,225,15);//tire 2
 line(360-55,210,590-55,210);//line above the tires


 //line(360-60,210,360-60,180);->This line broken into the following 2 lines:
 line(360-55,210,380-55,195);//dent
 line(380-55,195,360-55,180);//dent


 line(360-55,180,590-55,180);
 line(590-55,210,590-55,180);
 line(590-55,180,530-55,140);
 line(360-55,180,420-55,140);
 line(420-55,140,530-55,140);
 line(420-55,140,420-55,180);
 line(530-55,140,530-55,180);
 line(475-55,140,475-55,180);

 setfillstyle(SOLID_FILL,GREEN);
 floodfill(425-55,150,WHITE);

 setfillstyle(SOLID_FILL,GREEN);
 floodfill(480-55,150,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
 floodfill(402-55,226,WHITE);

 setfillstyle(SOLID_FILL,WHITE);
 floodfill(549-55,226,WHITE);

 setfillstyle(SOLID_FILL,CYAN);
 floodfill(431-55,226,WHITE);

/*
 //spark
 setcolor(YELLOW);
      line(296,175,288,150);
      line(305,175,315,150);
      line(291,175,281,150);
      line(311,175,322,150);
      line(300,175,300,150);
*/	  
	 //sky color
  setfillstyle(SOLID_FILL,CYAN);
  floodfill(8,10,WHITE); 
	  
 getch();
 closegraph();
}

