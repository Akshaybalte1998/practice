#include<stdio.h>
int add(int a)
{
	return a;
}
float add(float b)
{
	return b;
}
int main()
{
	print("print:");
	int a;
	a=add(5);
	printf("%d",a);
}
