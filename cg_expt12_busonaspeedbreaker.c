#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
 int gd=DETECT,gm=DETECT;
 int i,j;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

// move bus forward x --------------------------------------------------------------
 for(i=0;i<145;i=i+5)
 {
 //road
 setfillstyle(SOLID_FILL,BROWN);
 line(0,380,650,380);
 floodfill(1,381,WHITE);

 //sky
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(1,38,WHITE);

 //bus structure
 setfillstyle(SOLID_FILL,YELLOW);
 //bus base
 line(30+i,355,52+i,355);     // -
 circle(65+i,363,15);         // o   wheel1
 line(78+i,355,152+i,355);    // -
 circle(164+i,363,15);        // o   wheel2
 line(178+i,355,220+i,355);   // -

 //bus top part
 line(220+i,355,220+i,300);   // |
 line(220+i,300,220+i,270);   // \
 line(220+i,270,30+i,270);    // -
 line(30+i,270,30+i,355);     // |

  floodfill(31+i,271,WHITE);

 //door
 setfillstyle(SOLID_FILL,GREEN);
 line(190+i,280,210+i,280);   // -
 line(190+i,280,190+i,340);   // |
 line(190+i,340,210+i,340);   // -
 line(210+i,340,210+i,280);   // |
 floodfill(191+i,281,WHITE);


 //window
 setfillstyle(SOLID_FILL,RED);
 line(50+i,280,160+i,280);    // -
 line(50+i,280,50+i,320);     // |
 line(50+i,320,160+i,320);    // -
 line(160+i,320,160+i,280);   // |
 floodfill(51+i,281,WHITE);

 //dividing lines
 line(90+i,280,90+i,320);     // |
 line(120+i,280,120+i,320);   // |

 //speed breaker
 arc(330,380,0,180,10);

 delay(300);
 cleardevice();
 }

//wheel 2 up------------------------------------------------------------------------

  for(i=145,j=0;i<180,j<7;i=i+5,j=j+2)
 {
 //road
 setfillstyle(SOLID_FILL,BROWN);
 line(0,380,650,380);
 floodfill(1,381,WHITE);

 //sky
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(1,38,WHITE);

 //bus structure
 setfillstyle(SOLID_FILL,YELLOW);
 //bus base
 line(29+i,355,52+i,355);
 circle(65+i,363,15);               //wheel1
 line(78+i,355,152+i,355-j);
 circle(165+i,363-j,15);             //wheel2
 line(178+i,355,220+i,355-j);

 //bus top part
 line(220+i,355-j,220+i,300-j);
 line(220+i,300-j,220+i,270-j);
 line(220+i,270-j,30+i,270-j);
 line(30+i,270-j,30+i,360-j);

  floodfill(31+i,271,WHITE);

 //door
 setfillstyle(SOLID_FILL,GREEN);
 line(190+i,280-j,210+i,280-j);
 line(190+i,280-j,190+i,340-j);
 line(190+i,340-j,210+i,340-j);
 line(210+i,340-j,210+i,280-j);
 floodfill(191+i,281-j,WHITE);

 //window
 setfillstyle(SOLID_FILL,RED);
 line(50+i,280-j,160+i,280-j);
 line(50+i,280-j,50+i,320-j);
 line(50+i,320-j,160+i,320-j);
 line(160+i,320-j,160+i,280-j);
 floodfill(51+i,281-j,WHITE);
 //dividing lines
 line(90+i,280-j,90+i,320-j);
 line(120+i,280-j,120+i,320-j);

 //speed breaker
 arc(330,380,0,180,10);

 delay(300);
 cleardevice();
 }

//wheel 2 down---------------------------------------------------------------------------
  for(i=180,j=0;i<205,j<3;i=i+5,j=j+1)
 {
 //road
 setfillstyle(SOLID_FILL,BROWN);
 line(0,380,650,380);
 floodfill(1,381,WHITE);

 //sky
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(1,38,WHITE);

 //bus structure
 setfillstyle(SOLID_FILL,YELLOW);
 //bus base
 line(30+i,355,52+i,355);
 circle(65+i,363,15);
 line(78+i,355,152+i,355+j);
 circle(165+i,363+j,15);
 line(178+i,355+j,220+i,355+j);
 //bus top part
 line(220+i,355+j,220+i,300+j);
 line(220+i,300+j,220+i,270+j);
 line(220+i,270+j,30+i,270+j);
 line(30+i,270+j,30+i,355+j);
  floodfill(31+i,271+j,WHITE);


 //door
 setfillstyle(SOLID_FILL,GREEN);
 line(190+i,280+j,210+i,280+j);
 line(190+i,280+j,190+i,340+j);
 line(190+i,340+j,210+i,340+j);
 line(210+i,340+j,210+i,280+j);
 floodfill(191+i,281+j,WHITE);


 //window
 setfillstyle(SOLID_FILL,RED);
 line(50+i,280+j,160+i,280+j);
 line(50+i,280+j,50+i,320+j);
 line(50+i,320+j,160+i,320+j);
 line(160+i,320+j,160+i,280+j);
 floodfill(51+i,281+j,WHITE);
 //dividing lines
 line(90+i,280+j,90+i,320+j);
 line(120+i,280+j,120+i,320+j);

 //speed breaker
 arc(330,380,0,180,10);

 delay(300);
 cleardevice();
 }

//wheel 1 up--------------------------------------------------------------------------

 for(i=240,j=0;i<300,j<7;i=i+5,j=j+2)
 {
 //road
 setfillstyle(SOLID_FILL,BROWN);
 line(0,380,650,380);
 floodfill(1,381,WHITE);

 //sky
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(1,38,WHITE);

 //bus structure
 setfillstyle(SOLID_FILL,YELLOW);
 //bus base
 line(29+i,355-j,52+i,355-j);     // -
 circle(65+i,363-j,15);           // o   wheel1
 line(78+i,355-j,152+i,355);      // -
 circle(165+i,363,15);            // o   wheel2
 line(178+i,355,220+i,355);       // -

 //bus top part
 line(220+i,355,220+i,300);       // |
 line(220+i,300,220+i,270-j);     // \
 line(220+i,270-j,30+i,270-j);    // -
 line(30+i,270-j,30+i,355-j);     // |

  floodfill(31+i,271-j,WHITE);

 //door
 setfillstyle(SOLID_FILL,GREEN);
 line(190+i,280-j,210+i,280-j);   // -
 line(190+i,280-j,190+i,340-j);   // |
 line(190+i,340-j,210+i,340-j);   // -
 line(210+i,340-j,210+i,280-j);   // |
 floodfill(191+i,281-j,WHITE);

 //window
 setfillstyle(SOLID_FILL,RED);
 line(50+i,280-j,160+i,280-j);    // -
 line(50+i,280-j,50+i,320-j);     // |
 line(50+i,320-j,160+i,320-j);    // -
 line(160+i,320-j,160+i,280-j);   // |

 floodfill(51+i,282-j,WHITE);

 //dividing lines
 line(90+i,280-j,90+i,320-j);     // |
 line(120+i,280-j,120+i,320-j);   // |

 //speed breaker
 arc(330,380,0,180,10);

 delay(300);
 cleardevice();
 }

//wheel 1 down---------------------------------------------------------------

 for(i=300,j=0;i<320,j<3;i=i+5,j=j+1)
 {
 //road
 setfillstyle(SOLID_FILL,BROWN);
 line(0,380,650,380);
 floodfill(1,381,WHITE);

 //sky
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(1,38,WHITE);

 //bus structure
 setfillstyle(SOLID_FILL,YELLOW);
 //bus base
 line(30+i,355+j,52+i,355+j);
 circle(65+i,363+j,15);
 line(78+i,355+j,152+i,355);
 circle(165+i,363,15);
 line(178+i,355,220+i,355);

 //bus top part
 line(220+i,355+j,220+i,300+j);
 line(220+i,300+j,220+i,270+j);
 line(220+i,270+j,30+i,270+j);
 line(30+i,270+j,30+i,355+j);

  floodfill(31+i,271+j,WHITE);

 //door
 setfillstyle(SOLID_FILL,GREEN);
 line(190+i,280+j,210+i,280+j);
 line(190+i,280+j,190+i,340+j);
 line(190+i,340+j,210+i,340+j);
 line(210+i,340+j,210+i,280+j);
 floodfill(191+i,281+j,WHITE);


 //window
 setfillstyle(SOLID_FILL,RED);
 line(50+i,280+j,160+i,280+j);
 line(50+i,280+j,50+i,320+j);
 line(50+i,320+j,160+i,320+j);
 line(160+i,320+j,160+i,280+j);
 floodfill(51+i,281+j,WHITE);

 //dividing lines
 line(90+i,280+j,90+i,320+j);
 line(120+i,280+j,120+i,320+j);

 //speed breaker
 arc(330,380,0,180,10);

 delay(300);
 cleardevice();
 }

 // move forward bus-------------------------------------------------------


  i=330;
  //road
 setfillstyle(SOLID_FILL,BROWN);
 line(0,380,650,380);
 floodfill(1,381,WHITE);

 //sky
 setfillstyle(SOLID_FILL,CYAN);
 floodfill(1,38,WHITE);

 //bus structure
 setfillstyle(SOLID_FILL,YELLOW);
 //bus base
 line(30+i,355,52+i,355);     // -
 circle(65+i,363,15);         // o   wheel1
 line(78+i,355,152+i,355);    // -
 circle(165+i,363,15);        // o   wheel2
 line(178+i,355,220+i,355);   // -

 //bus top part
 line(220+i,355,220+i,300);   // |
 line(220+i,300,220+i,270);   // \
 line(220+i,270,30+i,270);    // -
 line(30+i,270,30+i,355);     // |

  floodfill(31+i,271,WHITE);

 //door
 setfillstyle(SOLID_FILL,GREEN);
 line(190+i,280,210+i,280);   // -
 line(190+i,280,190+i,340);   // |
 line(190+i,340,210+i,340);   // -
 line(210+i,340,210+i,280);   // |
 floodfill(191+i,281,WHITE);

 //window
 setfillstyle(SOLID_FILL,RED);
 line(50+i,280,160+i,280);    // -
 line(50+i,280,50+i,320);     // |
 line(50+i,320,160+i,320);    // -
 line(160+i,320,160+i,280);   // |
 floodfill(51+i,281,WHITE);

 //dividing lines
 line(90+i,280,90+i,320);     // |
 line(120+i,280,120+i,320);   // |

 //speed breaker
 arc(330,380,0,180,10);


 getch();
 closegraph();

}
