/*BINOMAL*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	float p,r;
	int t,k,n,s=0;
    srand(time(NULL));
	cout<<"Enter the suceess probability:->";
	cin>>p;
	cout<<"Enter the value of no of trials :->";
	cin>>k;
	cout<<"Number of variates to be genrate:->";
	cin>>n;
	
	cout<<"probability is:-> "<<p<<"\n Number of trails is:->"<<k<<"\n"<<"Number of variates is:->"<<n<<"\n";
	cout<<"Random variates are:->";
	int x=0;
	for(int i=0;i<n;i++)
	{
		x=0,s=0;
         while(s<k)
			{
				r=rand()/32768.0;
				if(r<=p)
				  {
				  	s=s+1;
				  }
				  
				  x=x+1;
			}
			 cout<<x<<",";
			 
    }
   
	return 0;
}