/*SINGLE SERVER*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int kk,i,j,run=20;
	float c,iat,st,awt,pcu,wt=0.0,it=0.0;
	float mean=10.0,sd=1.5,mue=9.5,sigma=1.0;
	float sb=0.0,se=0.0,cit=0.0,cat=0.0,cwt=0.0,x;
	printf("\n IAT\t\tCAT\t\tSB\t\tST\tSE\t\tCWT\tCIT");
	for(j=1;j<=run;++j)
	{
		float sum=0;
		for(i=1;i<=12;++i)
		{
			x=rand()/32768.0;
			sum=sum+=x;
		}
		iat=mean+sd*(sum-6);
		cat=cat+iat;
		
		if(cat<=se)
		{
			sb=se;
			wt=se-cat;
			cwt=cwt+wt;
		}
		else
		{
			sb=cat;
			it=sb-se;
			cit=cit+it;
		}
		sum=0.0;
		for(i=1;i<=12;++i)
		{
			x=rand()/32768.0;
			sum+=x;
		}
		st=mue+sigma*(sum-6);
		se=sb+st;
		printf("\n%5.2f    %6.2f    %6.2f    %6.2f    %6.2f    %6.2f    %6.2f  ",iat,cat,sb,st,se,cwt,cit);
	}
	
	awt=cwt/run;
	pcu=(cat-cit)*100.0/cat;
	
	printf("\n\nAVerage waiting time = %6.2f",awt);
	printf("\n\npercentage capacity utilization = %6.2f",pcu);
	
		return 0;
	
}