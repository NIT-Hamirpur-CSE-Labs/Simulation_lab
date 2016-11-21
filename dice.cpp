#include<bits/stdc++.h>

#include<graphics.h>
int main()
{
	int i,x[10],u=105,q;
	int e[10],t[10];
	e[0]=50;
	t[0]=300;
	int a;
	int gm,gd=DETECT;
	initgraph(&gd,&gm,NULL);
	//printf("Enter a limit : ");
	//scanf("%d",&a);
	a=6;
	line(50,300,600,300);
	line(50,300,50,120);
	outtextxy(50,350,"ATTEMPTS---->");
	outtextxy(50,310,"0");
	outtextxy(105,310,"1");
	outtextxy(160,310,"2");
	outtextxy(215,310,"3");
	outtextxy(270,310,"4");
	outtextxy(325,310,"5");
	outtextxy(380,310,"6");
	outtextxy(435,310,"7");
	outtextxy(490,310,"8");
	outtextxy(545,310,"9");
	outtextxy(600,310,"10");
	outtextxy(40,270,"1");
	outtextxy(10,240,"Dice 2");
	outtextxy(10,210,"Dice 3");
	outtextxy(10,180,"Dice 4");
	outtextxy(10,150,"Dice 5");
	outtextxy(10,120,"Dice 6");
	outtextxy(10,270,"Dice");
	srand(time(NULL));
	for(int i=0;i<=9;i++){
		x[i]=(rand() % a)+1;
		printf("%d\n",x[i]);
		if(x[i]==6)
			{q=120;
				t[i+1]=120;
				e[i+1]=u;
				line(e[i+1],t[i+1],e[i],t[i]);
			circle(u,q,0);
			u=u+55;
			//printf("HELLO\n");
		}
		else if(x[i]==5)
			{q=150;
				t[i+1]=150;
				e[i+1]=u;
				line(e[i+1],t[i+1],e[i],t[i]);
				circle(u,q,0);
			u=u+55;}
		else if(x[i]==4)
			{q=180;
				t[i+1]=180;
				e[i+1]=u;
				line(e[i+1],t[i+1],e[i],t[i]);
				circle(u,q,0);
			u=u+55;}
		else if(x[i]==3)
			{q=210;
				t[i+1]=210;
				e[i+1]=u;
				line(e[i+1],t[i+1],e[i],t[i]);
				circle(u,q,0);
			u=u+55;}
		else if(x[i]==2)
			{q=240;
				t[i+1]=240;
				e[i+1]=u;
				line(e[i+1],t[i+1],e[i],t[i]);
				circle(u,q,0);
			u=u+55;}
		else
			{q=270;
				t[i+1]=270;
				e[i+1]=u;
				line(e[i+1],t[i+1],e[i],t[i]);
				circle(u,q,0);
			u=u+55;}
		
		
	}
	
	closegraph();
	return 0;
}