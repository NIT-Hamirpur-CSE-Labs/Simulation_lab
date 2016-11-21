/*MONTY CARLO INTEGRATION*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	float y, x, res;
	float area=420,INT=0.0;
	float rand_num1,rand_num2;
	float M=0,N=0,n;
	    cout<<"INTEGRATION OF X^3";
    	cout<<"\nEnter the number of simulation:->";
    	cin>>n;
    	cout<<"Random numbers\t"<<"x\t"<<"Random numbers\ty\t\tx^3\t\tM\t\tN\n";
    	for(int i=0;i<n;i++)
    	{
    		
			rand_num1=rand()%50+1;
    		rand_num2=(rand()%100);
    		float k=rand_num2/100;
    		x=0.1*rand_num1;
    		y=140*k;
    		res=pow(x,3);
    		if(y<=res)
    		{
    		    M++;	
			}
			N++;
    		cout<<rand_num1<<"\t\t"<<x<<"\t  "<<k<<"\t\t"<<y<<"\t\t"<<res<<"\t\t"<<M<<"\t\t"<<N<<"\n";
		}
	int are=area*M/N;
    cout<<"\n\nINTEGRATION OF y=x^3 is:-> "<<are;
	
	cout<<"\n\n";
	
	return 0;
}