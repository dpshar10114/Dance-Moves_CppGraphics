#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

//class of doll

class doll
{
     public:
	void dolldraw(int x)
	{
		setcolor(WHITE);        //change
		int y=getmaxy()-200;
		circle(x,y+10,10);
		line(x,y+20,x,y+100);
		line(x,y+40,x-20,y+70);
		line(x,y+40,x+20,y+70);
		line(x,y+100,x-20,y+120);
		line(x,y+100,x+20,y+120);
	}
	void dollmoll(int x)
	{
		setcolor(WHITE);//change
		int y=getmaxy()-200;
		circle(x,y+10,10);
		line(x,y+20,x,y+100);
		line(x,y+50,x-20,y+30);
		line(x,y+50,x+20,y+30);
		line(x,y+100,x-20,y+90);
		line(x,y+100,x+20,y+90);
	}
};
void main()
    {
	doll a,b,c,d1,e; //temp
	int h,i,j,k,w=180;//temp
	int x,y,m;
	int g=DETECT,d;
	initgraph(&g,&d,"\tc\bgi");

	settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
	{                                             //FIRST SLIDE
	 setcolor(LIGHTRED);
	 outtextxy(120,150,"Dance Moves");
	}
	delay(2000);
	cleardevice();


	x=getmaxx()/2;
	y=100;
	setbkcolor(rand());
	setcolor(WHITE);

	//speakers
	rectangle(0,getmaxy()-71,120,getmaxy()-300); //left speaker
	rectangle(getmaxx()-120,getmaxy()-71,getmaxx(),getmaxy()-300);//right speaker
	settextstyle(SIMPLEX_FONT,HORIZ_DIR,2);
	 {
	  outtextxy(45,getmaxy()-100,"JBL");
	  outtextxy(getmaxx()-70,getmaxy()-100,"JBL");
	 }

	//disco light hanging string
	line(getmaxx()/2,0,getmaxx()/2,100);

	while (!kbhit())
	 { //a.dolldraw(w);        //doll1
	  h=w+45;
	  b.dolldraw(h);        //doll2
	  j=h+45;
	  c.dolldraw(j);        //doll3
	  i=j+45;
	  d1.dolldraw(i);       //doll4
	  k=i+45;
	  e.dolldraw(k);        //doll5
	 //stage lights
	 for(int z=getmaxy()-70;z<=getmaxy();z++)
	  {
	   setcolor(rand());
	   line(0,z,getmaxx(),z);
	  }
	  setcolor(rand());

	  //disco light and speker lights
	  for (int i=0;i<10;i++)
	   {
	   circle(x,y,i);
	   circle(60,getmaxy()-250,i);   //left speaker lights
	   circle(getmaxx()-60,getmaxy()-250,i); //right speaker lights
	   }
	  setcolor(rand());
	  for (int j=15;j<30;j++)
	   {
	   circle(x,y,j);
	   circle(60,getmaxy()-250,j);  //left speaker lights
	   circle(getmaxx()-60,getmaxy()-250,j); //right speaker lights
	   }
	  setcolor(rand());
	  for (int k=35;k<50;k++)
	   {
	   circle(x,y,k);
	   }
	  setcolor(rand());
	  for (int l=55;l<70;l++)
	  circle(x,y,l);
	  //dol code
	  setfillstyle(1,0);
	  bar(130,getmaxy()-71,getmaxx()-130,getmaxy()-200);
	  w=230;
	 //  a.dollmoll(w);
	  b.dollmoll(h);
	  i=h+45;
	  c.dollmoll(i);
	  j=i+45;
	  d1.dollmoll(j);
	  k=j+45;
	  e.dollmoll(k);
	  delay(350);
	  bar(130,getmaxy()-71,getmaxx()-130,getmaxy()-200);
	  delay(250);
	 }
	cleardevice();

	//Last Slide
	settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
	{                                             //FIRST SLIDE
	 setcolor(LIGHTRED);
	 outtextxy(180,150,"THANK YOU!!");
	 outtextxy(60,(getmaxy()/2),"HARDIK,HARSH & DHRUV");

	}
	delay(2000);
	getch();
	closegraph();
    }
