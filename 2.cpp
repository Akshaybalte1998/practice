#include<iostream>
using namespace std;

void convertTOhours(int num)
{
	int hrs, min;
	if(num<60)
	{
	   cout<<"hours : minutes "<<00<<" : "<<num<<endl;
	}
	else
	{
	hrs = num/ 60;
	min = num% 60;
	cout<<"hours : minutes "<<hrs<<" : "<<min<<endl;
	}
	
}

int main()
{
	int n;
	cout<<"Enter a number: "<<endl;
	cin>>n;
	 convertTOhours(n);
	
}
