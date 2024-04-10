#include<iostream>
#include<math.h>
using namespace std;
class Store
{
	private:
	int cd_arr[10]={101,102,103,104,105,106,107};
	int Pen=10,note=50,sugar=100,milk=30,soap=20,bucket=200,powder=40;
	public:
	void addItem(int code_no)
	{
        
		
		for(int i=0;i<10;i++)
		{
           if(cd_arr[i]==code_no) 
		   {

		   };

		}

	}
	void removeItem()
	{

	}
	void total()
	{

	}
};

int main()
{
	int ch,cd;
	Store obj;
	cout<<"Item Available in Store\n 101.Pen\n 102.Notebook\n 103.Sugar\n 104.Milk\n 105.Soap\n 106.Bucket\n 107.Powder\n";
	cout<<"Enter a choice:\n 1.ADD Item\n 2.Remove Item\n 3.Total Price\n "<<endl;
	cin>>ch;
	
	switch(ch)
	{
		case 1:
		cout<<"Enter Your Item code";
		cin>>cd;
		obj.addItem(cd);

		break;
		case 2:
		obj.removeItem();
		break;

		case 3:
		obj.total();
		break;

		default:

	}
	return 0;
}
