/*Chi square*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	 int rand_num,a[101],sum=0;
	 	float chi_test;
	 for(int i=0;i<=100;i++)
	 	a[i]=rand()%100;
 
   cout<<"Chi square test on following 100 random numbers:->";	 
   for(int i=0;i<=100;i++)
	 {
	    cout<<a[i]<<"\t";
	 }
	 
	 cout<<"\n\nThese numbers can be divided in 10 classes\n";
	 cout<<"Classes\t"<<"\tCount\t"<<"\tdiff\t"<<"(diff)^2\n";
	 int diff[10],diff_square[10];
	
    for(int j=0;j<=9;j++)
    { 
       int c1,c2,count=0;
       c1=j*10;
       c2=(j+1)*10;
       cout<<c1<<"< R <"<<c2<<"\t";
       for(int i=0;i<=100;i++)
         {
         	if(a[i]>c1&&a[i]<=c2)
         	{
         	   count++;	
			}
		 }
		cout<<count;
		  cout<<"\t\t";
		 diff[j]=abs(10-count);
		 cout<<diff[j]<<"\t";
		 diff_square[j]=pow(diff[j],2);
		 cout<<diff_square[j]<<"\n";
		 sum+=diff_square[j];
	}
	chi_test=sum/10;
	cout<<"\n\n"<<"Chi-Square="<<chi_test;
   return 0;
}