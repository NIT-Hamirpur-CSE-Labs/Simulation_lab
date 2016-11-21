/*NORMAL*/
#include <bits/stdc++.h>
using namespace std; 

double randn (double mu, double sigma)
{
  double U1, U2, W, mult;
  static double X1, X2;
  static int call = 0;
 
  if (call == 1)
    {
      call = !call;
      return (mu + sigma * (double) X2);
    }
 
  do
    {
      U1 = -1 + ((double) rand () / RAND_MAX) * 2;
      U2 = -1 + ((double) rand () / RAND_MAX) * 2;
      W = pow (U1, 2) + pow (U2, 2);
    }
  while (W >= 1 || W == 0);
 
  mult = sqrt ((-2 * log (W)) / W);
  X1 = U1 * mult;
  X2 = U2 * mult;
 
  call = !call;
 
  return (mu + sigma * (double) X1);
}
int main()
{
	int mu,sigma,n;
	double res;
	cout<<"Enter value of mean  and standard deviation:->";
	cin>>mu>>sigma;

	cout<<"Number of variates to be genrate:->";
	cin>>n;
	cout<<"Mean and standard deviation is :-> "<<mu<<" and "<<sigma<<"\n"<<"Number of variates are:-> "<<n<<"\n";
	cout<<"\nRandom numbers are:-> ";
	for(int i=0;i<n;i++)
	{
      res=randn(mu,sigma);
	  cout<<res<<",";
	}
    return 0;
	
}