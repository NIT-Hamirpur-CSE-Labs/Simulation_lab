//how to generate random no's
#include<bits/stdc++.h>
using namespace std;

int main()
{
	srand(time(NULL));
	for(int i=0;i<10;i++)
	{
    int random_number = std::rand()%10; // rand() return a number between ​0​ and 10
    cout << random_number<<endl;
    }
    

	return 0;
}