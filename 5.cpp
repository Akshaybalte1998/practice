#include<iostream>
#include<math.h>
using namespace std;
void swapdigit(int n)
{
    int a;
    while(n>0)
     {
     n=n/10;
     a++;
     }
   int arr[a];
   
   int temp=arr[a-1];
   arr[a-1]=arr[0];
   arr[0]=temp;
   for(int i =0;i<a;i++)
   {cout<<arr[i];}
}
int main()
{
    int num;
cout<<"Enter a number"<<endl;
cin>>num;
swapdigit(num);


}