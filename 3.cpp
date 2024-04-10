#include<iostream>
#include<math.h>
using namespace std;
int area(double a,double b,double c)
{
    double s,area;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area of triangle using Heron's formula = "<<area<<endl;
    return 0;
}
int main3()
{
	int s1,s2,s3;
	cout<<"Enter three side of array \n";
	cin>>s1>>s2>>s3;
	area(s1,s2,s3);
	return 0;
}
