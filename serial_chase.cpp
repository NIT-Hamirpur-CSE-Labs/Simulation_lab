/*SERIAL CHASE*/
#include<bits/stdc++.h>

using namespace std;
int main()
{
	cout<<"Points->A(10,10),B(30,10),C(30,30),D(10,30)";
	float xa=10.0,ya=10.0,xb=30.0,yb=10.0,xc=30.0,yc=30.0,xd=10.0,yd=30.0;
	float tab=0.0,tbc=0.0,tcd=0.0,td=0.0;
	float dab,dbc,dcd,t,delta=0.001,k;
	float va=35.0,vb=100000,vc=1000.0,vd=1.0;
	t=0.0;
	cout<<"\nVa="<<va<<"\nVb="<<vb<<"\nVc="<<vc<<"\nVd="<<vd<<"\n";
	
	dab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	dbc=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
	dcd=sqrt((xc-xd)*(xc-xd)+(yc-yd)*(yc-yd));

	
	while(t<=1.70)
	{
		xa=xa+va*delta*(xb-xa)/dab;
		ya=ya+va*delta*(yb-ya)/dab;
		
		xb=xb-vb*delta*(xb-xc)/dbc;
		yb=yb+yb*delta*(yc-yb)/dbc;
		
		xc=xc-vc*delta*(xc-xd)/dcd;
		yc=yc-vc*delta*(yc-yd)/dcd;
		xd=xd;
		yd=yd-vd*delta;
		
	dab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	dbc=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
	dcd=sqrt((xc-xd)*(xc-xd)+(yc-yd)*(yc-yd));
	
		
     printf("\nt=%6.4f    A=%5.2f,%5.2f   B=%5.2f,%5.2f  C=%5.2f,%5.2f  D=%5.2f,%5.2f",t,xa,ya,xb,yb,xc,yc,xd,yd);
       t=t+delta;
	   if(dab<=0.005)
	     {
	         t=4.0;
			 cout<<"\n B Killed,chase ends";
			 
		 }	
		  if(dbc<=0.005)
	     {
	         t=4.0;
			 cout<<"\n C Killed,chase ends";
				
		 }
		  if(dcd<=0.005)
	     {
			 cout<<"\n D Killed,chase ends";	
			 	break;
		 }	
		
	}
	
	return 0;
}