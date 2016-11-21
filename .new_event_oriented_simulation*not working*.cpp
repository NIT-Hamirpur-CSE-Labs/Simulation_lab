#include<bits/stdc++.h>
using namespace std; 

int main() 
{
float r,iat; 
float mue=1/6,lemda=1/5,run=180; 
float clock=0,se=0,sb=0,nat=0,cit=0,cwt=0,st=0,it=0,wt=0; 
int q=0,cq=0,k,count=0,qmax=0; 

printf("\nCLOCK\tIAT\tNAT\tQUE\tSB\tSE\tIT\tWT\tCIT\tWIT");
	 
	 r=rand()/32768.0;
	 iat=(-1/mue)*log(1-r);
	 nat=nat+iat;
	 count++;
	 
	 while(clock<=run)
	 {
	 	if(q>qmax)	 	qmax=q;
	 	
	 cout<<clock<<" "<<iat<<" "<<nat<<" "<<q<<" "<<sb<<" "<<se<<" "<<it<<" "<<wt<<" "<<cit<<" "<<wt<<endl;


	 	if(nat>=se)
	 	 {
	 	 		  if(q>0)
				   {
				   	  wt=q*(se-clock);
				   	  cwt=cwt+wt;
				   	  q=q-1;
				   	  clock=se;
				   }
					else
					{
					  clock=nat;	
					  r=rand()/32768.0;
					  iat=(-1/mue)*log(1-r);
					  nat=nat+iat;
					  count++;
				
					}

					sb=clock;
					it=clock-se;
					cit+=it;
					r=rand()/32768.0;
					st=(-1/lemda)*log(1-r);
					se=sb+st;	
		    }
		  else
		     {
		     	wt=q*iat;
		     	cwt=cwt+wt;
		     	clock=nat;
		     	q=q+1;
		     	r=rand()/32768.0;
		     	iat=(-1/mue)*log(1-r);
		     	nat=nat+iat;
		     	count++;
			 }
		 
	 }


	 int ab=cwt/count;
printf("Elapsed time %7.2f per arrival = %d ",clock,count);
printf("Elapsed time %7.2f per arrival",cwt/count);
//	 cout<<ab<<endl;
	  //printf("\n\nElapsed time= %7.2f per arrival and number of arrivals=%d",cwt,count);
		 printf("\n\npercentage server idle time= %7.2f",cit*100.0/clock);
		 printf("\n\nQmax=%d",qmax);
		 
	 return 0;
	 
}

