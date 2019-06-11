#include<graphics.h>
#include<stdio.h>
#include<conio.h>

void main()
{
 int gd=DETECT,gm=DETECT;
 int i,j,k,ty;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 for(i=0,j=0,k=0,ty=0;i<270,j<360,k<30,ty<40;i=i-37,j=j+37,k=k+5,ty=ty+8)
 {
 line(0,300,100,200);
 line(100,200,200,300);
 line(200,300,300,200);
 line(300,200,400,300);
 line(400,300,500,200);
 line(500,200,600,300);
 line(600,300,700,200);
 setfillstyle(SOLID_FILL,BROWN);
 floodfill(150,290,WHITE);
 line(0,300,700,300);
 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(400,200,WHITE);
 arc(400,305-ty,90+i,90+j,0+k);
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(150,90,WHITE);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(150,450,WHITE);
 delay(200);
 cleardevice();
 }
 line(0,300,100,200);
 line(100,200,200,300);
 line(200,300,300,200);
 line(300,200,400,300);
 line(400,300,500,200);
 line(500,200,600,300);
 line(600,300,700,200);

 setfillstyle(SOLID_FILL,BROWN);
 floodfill(150,290,WHITE);
 line(0,300,700,300);

 setfillstyle(SOLID_FILL,YELLOW);
 floodfill(400,200,WHITE);
 arc(400,200,0,360,22);
 
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(150,90,WHITE);
 setfillstyle(SOLID_FILL,GREEN);
 floodfill(150,450,WHITE);

 line(400,230,400,260);     // |
 line(400,170,400,140);   // |
 line(430,200,460,200);   // -
 line(370,200,340,200);   // -
 line(350,150,380,180);   // \
 line(420,180,450,150);   // /
 line(360,250,380,225);   // /
 line(420,225,445,245);   // \

 getch();
 closegraph();
}
