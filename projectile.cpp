#include<bits/stdc++.h>
#include<graphics.h> 

int main()
{
	int f,u,v,a,t,m,k;
u=0;
   int gd = DETECT,gm,left=100,top=100,right=200,bottom=200,x= 75,y=50,radius=25;
   initgraph(&gd,&gm,NULL);
  // rectangle(left, top, right, bottom);

   //bar(left + 300, top, right + 300, bottom);


m=1;
a=f;
printf("Enter the force to be exerted on a 10 mg ball : ");
	scanf("%d",&f);
if(f<10)
k=500;
else if(f>=10 && f<20) 
k=600;
else if(f>=20 && f<30)
k=700;

   //ellipse(x, y + 200, 0, 360, 100, 50);
   //outtextxy(left + 100, top + 325, "C Graphics Program");
for(int i=x,j=y;i<k,j<275;i++,j++)
{
	getclear();
	delay(10); 
   line(0,275,50,275);
line(50,274,40,265);
line(50,275,40,285);
line(0,300,1000,300);
  circle(i, 275, radius);
}
   //delay(5000);
   //closegraph();
return 0;

   
}
