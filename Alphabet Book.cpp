#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	//cover
	settextstyle(1,0,5);
	setcolor(LIGHTGREEN);
    outtextxy(20,200,"ALPHABET BOOK");
    
    getch();
    cleardevice();
    
    //A
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"A");
    
    setcolor(RED);
    setfillstyle(1,RED);
    ellipse(260,250,50,290,60,90);
    ellipse(338,250,250,130,60,90);
    ellipse(300,335,0,180,20,10);
    floodfill(300,300,RED);
    setcolor(BROWN);
    setfillstyle(1,BROWN);
    line(290,120,298,180);
    line(310,120,298,180);
    line(310,120,290,120);
    floodfill(300,125,BROWN);
    
    setcolor(15);
    settextstyle(1,0,5);
    outtextxy(120,360,"A for APPLE");
    
    getch();
    cleardevice();
    
    //B
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"B");
    
    circle(300,230,100);
    ellipse(279,247,90,270,20,80);
    ellipse(277,247,90,200,70,80);
    ellipse(279,152,90,270,5,20);
    ellipse(320,247,270,90,20,80);
    ellipse(325,247,0,90,74,80);
    ellipse(320,152,270,90,5,20);
    fillellipse(300,170,25,10);
    setfillstyle(1,LIGHTBLUE);
    floodfill(300,170,WHITE);
    setfillstyle(9,LIGHTGREEN);
    floodfill(300,200,WHITE);
    floodfill(210,200,WHITE);
    floodfill(350,170,WHITE);
    setfillstyle(9,CYAN);
    floodfill(250,200,WHITE);
    floodfill(350,200,WHITE);
    floodfill(300,140,WHITE);
    
    setcolor(15);
    settextstyle(1,0,5);
    outtextxy(125,360,"B for BALL");
    
    getch();
    cleardevice();
    
    //C
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"C");
    
    setcolor(LIGHTMAGENTA);
    line(250,150,350,150);
    line(250,150,210,200);
	line(350,150,390,200);
	line(210,200,390,200);
	setfillstyle(1,13);
	floodfill(252,152,LIGHTMAGENTA);
	setfillstyle(1,13);
	bar(150,200,400,205);
	setfillstyle(1,7);//lower
	bar(150,206,400,250);
	setcolor(7);
	line(150,250,400,250);
	line(150,250,180,275);
	line(400,250,380,275);
	line(380,275,180,275);
	setfillstyle(1,7);
	floodfill(180,255,7);
	setcolor(5);
	circle(220,275,30);
	circle(340,275,30);
	setfillstyle(1,5);
	floodfill(220,275,5);
	floodfill(340,275,5);
	setcolor(0);
	circle(220,275,20);
	circle(340,275,20);
	setfillstyle(1,0);
	floodfill(220,275,0);
	floodfill(340,275,0);
	setcolor(15);
	setlinestyle(0,0,3);
	circle(220,275,7);
	circle(340,275,7);
    setcolor(9);
	setbkcolor(15);
    line(255,155,225,195);
    line(255,155,345,155);
    line(345,155,375,195);
    line(225,195,375,195);
    setfillstyle(5,9);
    floodfill(260,160,9);
    setcolor(0);
    line(270,157,270,266);
    line(330,157,330,246);
    
    setcolor(15);
    setbkcolor(0);
    settextstyle(1,0,5);
    outtextxy(125,360,"C for CAR");
    
    getch();
    cleardevice();
    
    //D
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"D");
    
    setlinestyle(0,0,0);
    setcolor(BROWN);
    circle(300,220,120);
    circle(300,220,40);
    setfillstyle(1,BROWN);
    floodfill(200,200,BROWN);
    setcolor(LIGHTRED);
    arc(300,220,0,180,120);
    arc(300,220,0,180,40);
    arc(220,220,180,0,40);
    arc(380,220,180,0,40);
    setfillstyle(1,LIGHTRED);
    floodfill(200,200,LIGHTRED);
    setcolor(BLUE);
    setlinestyle(0,0,3);
    circle(200,200,5);
    circle(210,250,5);
    circle(360,200,5);
    circle(270,130,5);
    circle(340,160,5);
    circle(400,230,5);
    setcolor(GREEN);
    circle(250,200,5);
    circle(290,170,5);
    circle(340,120,5);
    setcolor(RED);
    circle(300,120,5);
    circle(240,160,5);
    circle(380,180,5);
    
    setcolor(15);
    setbkcolor(0);
    settextstyle(1,0,5);
    outtextxy(125,360,"D for DONUT");
    
    getch();
    cleardevice();
    
    //E
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"E");
    
    setlinestyle(0,0,0);
    line(180,320,420,320);
    line(180,320,180,190);
    line(420,320,420,190);
    line(180,320,270,230);
    line(420,320,330,230);
    ellipse(300,230,0,180,30,10);
    line(180,190,270,230);
    line(420,190,330,230);
    line(300,100,420,190);
    line(180,190,300,100);
    setfillstyle(1,LIGHTGRAY);
    floodfill(300,200,WHITE);
    setfillstyle(1,BLUE);
    floodfill(300,300,WHITE);
    floodfill(370,260,WHITE);
    floodfill(200,260,WHITE);
    
    setcolor(15);
    setbkcolor(0);
    settextstyle(1,0,5);
    outtextxy(80,360,"E for ENVELOP");
    
    getch();
    cleardevice();
    
    //F
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"F");
    
    setlinestyle(0,0,0);
    setcolor(LIGHTRED);
	setfillstyle(9,LIGHTRED);
	setbkcolor(RED);
	fillellipse(340,160,35,35);//ne
	fillellipse(340,240,35,35);//se
	fillellipse(255,240,35,35);//sw
	fillellipse(255,160,35,35);//nw
	setfillstyle(1,LIGHTRED);
	fillellipse(300,150,35,35);//n
	fillellipse(300,250,35,35);//s
	fillellipse(350,200,35,35);//e
	fillellipse(250,200,35,35);//w
	setcolor(RED);
	line(250,200,350,200);
	line(300,150,300,250);
	line(300,200,280,160);
	line(300,200,320,160);
	line(300,200,340,180);
	line(300,200,340,220);
	line(300,200,320,240);
	line(300,200,280,240);
	line(300,200,260,220);
	line(300,200,260,180);
	setcolor(YELLOW);
	setbkcolor(BROWN);
	setfillstyle(9,0);
	fillellipse(300,200,30,30);
	
    setcolor(15);
    setbkcolor(0);
    settextstyle(1,0,5);
    outtextxy(80,360,"F for FLOWER");
    
    getch();
    cleardevice();
    
    //G
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"G");
    
    setcolor(BROWN);
    setfillstyle(1,BROWN);
    bar(200,100,400,110);
    bar(280,110,300,150);
    setcolor(LIGHTGREEN);
    setfillstyle(1,GREEN);
    
    circle(240,170,25);
    floodfill(240,170,LIGHTGREEN);
    circle(340,170,25);
    floodfill(340,170,LIGHTGREEN);
    circle(390,170,25);
    floodfill(390,170,LIGHTGREEN);
    circle(265,210,25);
    floodfill(265,210,LIGHTGREEN);
    circle(315,210,25);
    floodfill(315,210,LIGHTGREEN);
    circle(365,210,25);
    floodfill(365,210,LIGHTGREEN);
    circle(290,250,25);
    floodfill(290,250,LIGHTGREEN);
    circle(340,250,25);
    floodfill(340,250,LIGHTGREEN);
    circle(315,290,25);
    floodfill(315,290,LIGHTGREEN);
    
    circle(290,170,25);
    floodfill(290,170,LIGHTGREEN);
    
    setcolor(15);
    setbkcolor(0);
    settextstyle(1,0,5);
    outtextxy(80,360,"G for GRAPES");
    
    getch();
    cleardevice();
    
    //H
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"H");
    
    line(270,210,270,340);
    line(170,190,170,320);
    line(170,320,270,340);
    line(270,210,220,130);
    line(170,190,220,130);
    line(420,200,420,320);
    line(270,340,420,320);
    line(270,210,420,200);
    line(420,200,370,130);
    line(220,130,370,130);
    line(200,330,200,250);
    line(240,335,240,260);
    line(200,250,240,260);
    setfillstyle(9,LIGHTGREEN);
	floodfill(300,300,WHITE);
    setcolor(LIGHTBLUE);
    rectangle(320,240,380,290);   
	setfillstyle(2,BLUE);
	setbkcolor(YELLOW);
	floodfill(322,242,LIGHTBLUE); 
	setfillstyle(1,LIGHTRED);
	floodfill(220,140,WHITE);
	setfillstyle(1,RED);
	floodfill(220,270,WHITE);
	setfillstyle(7,BLUE);
	setbkcolor(LIGHTBLUE);
	floodfill(240,135,15);
	
    setcolor(15);
    setbkcolor(0);
    settextstyle(1,0,5);
    outtextxy(100,360,"H for HOUSE");
    
    getch();
    cleardevice();
    
    //I
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"I");
    
    setcolor(BROWN);
    line(280,340,230,200);
    line(280,340,330,200);
    line(230,200,330,200);
    setcolor(LIGHTRED);
    setfillstyle(1,LIGHTRED);
    pieslice(280,200,0,180,50);
    setfillstyle(9,BROWN);
    setbkcolor(BLACK);
    floodfill(280,210,BROWN);
    setcolor(RED);
    setfillstyle(1,RED);
    fillellipse(280,140,10,10);
    setcolor(BROWN);
    line(310,160,330,120);
    line(320,170,340,130);
    line(330,120,340,130);
    line(310,160,320,170);
    setfillstyle(1,GREEN);
    floodfill(315,160,BROWN);

    setcolor(15);
    setbkcolor(0);
    settextstyle(1,0,5);
    outtextxy(60,360,"I for ICE-CREAM");
    
    getch();
    cleardevice();
    
    //J
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"J");
    
    ellipse(300,130,360,0,60,10);
    line(240,130,240,340);
    line(360,130,360,340);
    ellipse(300,340,180,0,60,10);
    ellipse(360,240,270,90,70,70);
    ellipse(360,240,270,90,50,50);
    ellipse(300,230,360,0,61,7);
    setfillstyle(1,YELLOW);
    floodfill(300,300,WHITE);
    floodfill(300,230,WHITE);
    setfillstyle(9,LIGHTGRAY);
    floodfill(400,200,WHITE);

    settextstyle(1,0,5);
    outtextxy(170,360,"J for JUG");
    
    getch();
    cleardevice();
    
    //K
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"K");
    
    line(300,80,225,170);
    line(300,80,375,170);
    line(300,270,225,170);
    line(300,270,375,170);
	line(300,270,280,300);
    line(300,270,320,300);
    line(280,300,320,300);
    line(300,75,300,270);
    ellipse(300,170,0,180,75,10);
    ellipse(330,300,180,0,30,50);
    setfillstyle(9,GREEN);
    floodfill(270,130,WHITE);
    setfillstyle(9,BLUE);
    floodfill(320,130,WHITE);
    setfillstyle(9,LIGHTBLUE);
    floodfill(270,200,WHITE);
    setfillstyle(9,LIGHTGREEN);
    floodfill(320,200,WHITE);
    setfillstyle(1,LIGHTRED);
    floodfill(300,290,WHITE);
    setcolor(LIGHTGREEN);
    setfillstyle(1,LIGHTGREEN);
    pieslice(275,200,0,360,17);
    setcolor(LIGHTBLUE);
    setfillstyle(1,LIGHTBLUE);
    pieslice(325,200,0,360,17);
    
    setcolor(15);
    settextstyle(1,0,5);
    outtextxy(170,360,"K for KITE");
    
    getch();
    cleardevice();
    
    //L
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"L");
    
    setcolor(LIGHTRED);
    setfillstyle(1,LIGHTRED);
    fillellipse(300,340,60,10);
    line(240,340,240,350);
    line(360,340,360,350);
    ellipse(300,350,180,0,60,10);
    setcolor(BROWN);
    setfillstyle(1,BROWN);
    rectangle(285,210,315,340);
    floodfill(290,215,BROWN);
    setcolor(YELLOW);
    line(240,120,360,120);
    line(240,120,210,210);
    line(360,120,390,210);
    arc(225,210,180,0,15);
    arc(255,210,180,0,15);
    arc(285,210,180,0,15);
	arc(315,210,180,0,15);
	arc(345,210,180,0,15);
	arc(375,210,180,0,15);
	setfillstyle(4,YELLOW);
	floodfill(259,125,YELLOW);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(150,360,"L for LAMP");
    
    getch();
    cleardevice();
    
    //M
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"M");
    
    arc(300,200,67,294,120);
    arc(390,200,113,250,120);
    setfillstyle(1,LIGHTGRAY);
    floodfill(200,200,WHITE);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(120,360,"M for MOON");
    
    getch();
    cleardevice();
    
    //N
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"N");
    
    setcolor(BROWN);
    setfillstyle(1,BLUE);
    rectangle(110,150,125,350);
    rectangle(480,150,495,350);
    floodfill(115,155,BROWN);
    floodfill(485,155,BROWN);
    setcolor(LIGHTGRAY);
    setfillstyle(7,LIGHTGRAY);
    rectangle(125,160,480,280);
    floodfill(130,170,LIGHTGRAY);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(150,360,"N for NET");
    
    getch();
    cleardevice();
    
    //O
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"O");
    
    
    setcolor(WHITE);
    setfillstyle(1,15);
    bar3d(210,200,380,310,30,1);
    setcolor(BLACK);
    rectangle(220,210,345,300);
    setfillstyle(1,0);
    floodfill(222,215,0);
    setcolor(BLUE);
    setbkcolor(WHITE);
    setlinestyle(0,0,2);
    rectangle(350,210,375,300);
    setfillstyle(7,BLUE);
    floodfill(352,212,BLUE);
    setcolor(15);
    rectangle(335,240,340,270);
    setbkcolor(0);
    setlinestyle(0,0,0);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(150,360,"O for OVEN");
    
    getch();
    cleardevice();
    
    //P
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"P");
    
    setcolor(GREEN);
    rectangle(295,120,305,160);
    setfillstyle(1,GREEN);
    floodfill(297,123,GREEN);
    setcolor(BROWN);
    ellipse(300,250,0,360,50,90);
    ellipse(250,250,58,303,50,90);
    ellipse(200,250,60,300,50,90);
    ellipse(350,250,240,120,50,90);
    ellipse(400,250,240,120,50,90);
    ellipse(220,162,0,180,25,10);
    ellipse(270,162,0,180,25,10);
    ellipse(330,162,0,180,25,10);
    ellipse(380,162,0,180,25,10);
    setfillstyle(1,YELLOW);
    floodfill(300,250,BROWN);
    floodfill(160,250,BROWN);
    floodfill(210,250,BROWN);
    floodfill(360,250,BROWN);
    floodfill(420,250,BROWN);
    floodfill(220,155,BROWN);
    floodfill(270,155,BROWN);
    floodfill(330,155,BROWN);
    floodfill(380,155,BROWN);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(80,360,"P for PUMPKIN");
    
    getch();
    cleardevice();
    
    //Q
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"Q");
    
    setcolor(LIGHTGREEN);
    setfillstyle(1,LIGHTGREEN);
    pieslice(300,200,90,0,120);
    setcolor(GREEN);
    setfillstyle(1,GREEN);
    pieslice(320,180,0,90,120);
    setcolor(0);
    line(300,100,300,350);
    line(100,197,400,197);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(80,360,"Q for QUATER");
    
    getch();
    cleardevice();
    
    //R
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"R");
    
    setfillstyle(1,15);
    bar(230,130,390,300);
    setfillstyle(1,0);
    bar(240,150,380,300);
    setcolor(MAGENTA);
    setfillstyle(1,MAGENTA);
    rectangle(180,210,430,350);
    floodfill(202,222,MAGENTA);
    setcolor(15);
    setbkcolor(0);
    setfillstyle(8,15);
    circle(230,300,35);
    circle(230,300,40);
    circle(380,300,35);
    circle(380,300,40);
    floodfill(230,300,WHITE);
    floodfill(380,300,WHITE);
    setfillstyle(1,BLACK);
    rectangle(280,280,330,340);
    floodfill(282,282,WHITE);
    setfillstyle(1,15);
    bar(280,290,330,300);
    bar(280,320,330,330);
    pieslice(250,225,0,360,8);
    pieslice(280,225,0,360,8);
    pieslice(310,225,0,360,8);
    pieslice(340,225,0,360,8);
    pieslice(370,225,0,360,8);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(120,360,"R for RADIO");
    
    getch();
    cleardevice();
    
    //S
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"S");
    
    setcolor(BROWN);
    circle(310,190,100);
    setcolor(YELLOW);
    setlinestyle(0,0,4);
    line(310,20,310,80);
    line(310,300,310,360);
    line(130,190,200,190);
    line(420,190,490,190);
    line(390,110,440,50);
    line(390,265,450,320);
    line(230,260,180,310);
    line(230,120,160,70);
    setfillstyle(1,YELLOW);
    floodfill(310,190,BROWN);
    setcolor(0);
    arc(310,200,180,0,50);
    setlinestyle(0,0,0);
    setcolor(15);
    setfillstyle(1,15);
    circle(270,150,20);
    circle(350,150,20);
    floodfill(270,150,15);
    floodfill(350,150,15);
    setcolor(0);
    setfillstyle(1,0);
    circle(270,160,10);
    circle(350,160,10);
    floodfill(270,160,0);
    floodfill(350,160,0);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(170,360,"S for SUN");
    
    getch();
    cleardevice();
    
    //T
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"T");
    
    setfillstyle(9,BLUE);
	setbkcolor(LIGHTBLUE);
	fillellipse(300,100,150,30);
	ellipse(300,100,180,0,150,30);
	ellipse(300,120,180,0,150,30);
	line(150,100,150,120);
	line(450,100,450,120);
	setfillstyle(1,15);
	floodfill(200,130,WHITE);
	setfillstyle(9,BLUE);
	ellipse(300,150,180,0,20,5);
	ellipse(300,330,180,0,20,5);
	line(280,150,280,330);
	line(320,150,320,330);
	ellipse(300,330,105,75,80,20);
	floodfill(282,155,WHITE);
	setfillstyle(9,BLUE);
	floodfill(300,338,WHITE);
	ellipse(300,350,180,0,80,20);
	line(220,330,220,350);
	line(380,330,380,350);
	setfillstyle(1,15);
	floodfill(300,360,WHITE);
	setbkcolor(0);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(120,370,"T for TABLE");
    
    getch();
    cleardevice();
    
    //U
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"U");
    
    setcolor(BLUE);
    rectangle(290,150,310,290);
    setfillstyle(1,BLUE);
    arc(275,290,180,0,35);
    arc(275,290,180,0,18);
    arc(249,290,0,180,9);
    floodfill(300,280,BLUE);
    setfillstyle(9,YELLOW);
    floodfill(300,300,BLUE);
    
    setcolor(WHITE);
    ellipse(300,170,0,180,120,120);
    arc(210,170,0,180,30);
    arc(270,170,0,180,30);
    arc(330,170,0,180,30);
    arc(390,170,0,180,30);
    ellipse(295,130,80,205,60,80);
    ellipse(305,130,335,100,60,80);
    line(300,50,300,160);
    arc(300,50,0,180,10);
    setfillstyle(1,RED);
    floodfill(300,45,WHITE);
    setfillstyle(9,LIGHTCYAN);
    floodfill(220,100,WHITE);
    setfillstyle(9,GREEN);
    floodfill(250,100,WHITE);
    setfillstyle(9,LIGHTGREEN);
    floodfill(340,100,WHITE);
    setfillstyle(9,CYAN);
    floodfill(380,100,WHITE);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(60,360,"U for UMBRELLA");
    
    getch();
    cleardevice();
    
    //V
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"V");
    
    fillellipse(300,100,40,5);
    setcolor(0);
    setfillstyle(1,0);
    fillellipse(300,100,35,3);
    setcolor(15);
    line(261,100,265,115);
    line(339,100,335,115);
    line(265,115,335,115);
    ellipse(265,165,270,90,10,50);
    ellipse(335,165,90,270,10,50);
    ellipse(265,280,90,270,30,65);
    ellipse(335,280,270,90,30,65);
    rectangle(265,345,335,355);
    setfillstyle(1,BROWN);
    floodfill(300,110,WHITE);
    floodfill(300,350,WHITE);
    setfillstyle(4,YELLOW);
    floodfill(300,200,WHITE);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(150,360,"V for VASE");
    
    getch();
    cleardevice();
    
    //W
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"W");
    
    setlinestyle(0,0,6);
    setcolor(GREEN);
    ellipse(300,200,180,0,150,120);
    setlinestyle(0,0,0);
    setcolor(RED);
    setfillstyle(1,RED);
    sector(300,198,180,0,148,118);
    setcolor(0);
    setfillstyle(1,0);
    circle(180,220,5 );
    floodfill(180,220,0);
    circle(220,220,5 );
    floodfill(220,220,0);
    circle(260,220,5 );
    floodfill(260,220,0);
    circle(300,220,5 );
    floodfill(300,220,0);
    circle(340,220,5 );
    floodfill(340,220,0);
    circle(380,220,5 );
    floodfill(380,220,0);
	circle(420,220,5 );
    floodfill(420,220,0);
    circle(200,240,5 );
    floodfill(200,240,0);
    circle(240,240,5 );
    floodfill(240,240,0);
    circle(280,240,5 );
    floodfill(280,240,0);
    circle(320,240,5 );
    floodfill(320,240,0);
    circle(360,240,5 );
    floodfill(360,240,0);
    circle(400,240,5 );
    floodfill(400,240,0);
    circle(220,260,5 );
    floodfill(220,260,0);
    circle(260,260,5 );
    floodfill(260,260,0);
    circle(300,260,5 );
    floodfill(300,260,0);
    circle(340,260,5 );
    floodfill(340,260,0);
    circle(380,260,5 );
    floodfill(380,260,0);
    circle(240,280,5 );
    floodfill(240,280,0);
    circle(280,280,5 );
    floodfill(280,280,0);
    circle(320,280,5 );
    floodfill(320,280,0);
    circle(360,280,5 );
    floodfill(360,280,0);
    circle(260,300,5 );
    floodfill(260,300,0);
     circle(300,300,5 );
    floodfill(300,300,0);
     circle(340,300,5 );
    floodfill(340,300,0);
    
    settextstyle(1,0,4);
    setcolor(15);
    outtextxy(70,360,"W for WATERMELON");
    
    getch();
    cleardevice();
    
    
    //X
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"X");
    
    setlinestyle(0,0,1);
    setcolor(BROWN);
	setfillstyle(1,BROWN);
	rectangle(210,300,260,400);
	floodfill(212,302,BROWN);
	setcolor(GREEN);
	setfillstyle(9,GREEN);
	line(240,50,190,120);
	line(240,50,290,120);
	arc(200,120,180,0,10);
	arc(220,120,180,0,10);
	arc(240,120,180,0,10);
	arc(260,120,180,0,10);
	arc(280,120,180,0,10);
	floodfill(250,100,GREEN);
	line(210,120,170,170);
	line(270,120,305,170);
	arc(180,170,180,0,10);
	arc(200,170,180,0,10);
	arc(220,170,180,0,10);
	arc(240,170,180,0,10);
	arc(260,170,180,0,10);
	arc(280,170,180,0,10);
	arc(298,170,180,0,9);
	floodfill(200,150,GREEN);
	line(190,170,140,240);
	line(290,170,340,240);
	arc(160,240,180,0,20);
	arc(200,240,180,0,20);
	arc(240,240,180,0,20);
	arc(280,240,180,0,20);
	arc(320,240,180,0,20);
	floodfill(200,230,GREEN);
	line(180,240,130,320);
	line(300,240,340,320);
	arc(150,320,180,0,20);
	arc(190,320,180,0,20);
	arc(235,320,180,0,25);
	arc(280,320,180,0,20);
	arc(320,320,180,0,20);
	floodfill(200,300,GREEN);
	setfillstyle(1,GREEN);
	rectangle(150,400,320,410);
	floodfill(153,403,GREEN);
	setcolor(YELLOW);
	setfillstyle(9,YELLOW);
	line(240,20,220,50);
	line(240,20,260,50);
	line(220,50,270,30);
	line(260,50,210,30);
	line(210,30,270,30);
	floodfill(240,25,YELLOW);
	floodfill(240,35,YELLOW);
	floodfill(220,32,YELLOW);
	floodfill(260,32,YELLOW);
	floodfill(230,40,YELLOW);
	floodfill(250,40,YELLOW);
	setcolor(12);//lightred
	setlinestyle(0,0,3);
	circle(190,130,5);
	circle(280,185,5);
	circle(240,185,5);
	circle(150,263,5);
	circle(240,263,5);
	circle(330,263,5);
	setcolor(3);//cyan
	circle(240,132,5);
	circle(200,185,5);
	circle(300,185,5);
	circle(190,345,5);
	circle(320,345,5);
	setcolor(7);//lightgrey
	circle(218,133,5);
	circle(280,133,5);
	circle(260,185,5);
	circle(200,263,5);
	circle(280,263,5);
	circle(150,345,5);
	circle(280,345,5);
	setcolor(YELLOW);//yellow
	circle(260,133,5);
	circle(180,185,5);
	circle(220,185,5);
	circle(233,346,5);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(30,430,"X for XMAS TREE");
    
    getch();
    cleardevice();
    
    //Y
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"Y");
    
    setlinestyle(0,0,0);
    setcolor(BROWN);
    line(160,280,190,340);
    line(440,280,410,340);
    line(160,280,440,280);
    line(190,340,410,340);
    setfillstyle(1,BROWN);
    floodfill(162,282,BROWN);
    setlinestyle(0,0,8);
    line(300,80,300,279);
    setlinestyle(0,0,0);
    setcolor(15);
    line(297,75,160,280);
    line(297,75,297,280);
    line(303,75,400,230);
    line(303,75,303,230);
    ellipse(230,280,0,180,70,15);
    ellipse(351,230,0,180,50,15);
    setfillstyle(9,LIGHTRED);
    floodfill(250,160,WHITE);
    setfillstyle(9,LIGHTBLUE);
    floodfill(320,160,WHITE);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(100,360,"Y for YATCH");
    
    getch();
    cleardevice();
    
    //Z
    settextstyle(1,0,9);
	setcolor(15);
    outtextxy(20,20,"Z");
    
    fillellipse(300,200,110,150);
    setfillstyle(1,0);
    fillellipse(300,200,60,100);
    
    settextstyle(1,0,5);
    setcolor(15);
    outtextxy(130,360,"Z for ZERO");
        
    
	getch();
	closegraph();
	return(0);
}
