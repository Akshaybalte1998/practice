#include <fstream>  
#include <iostream> 
#include<string.h> 

using namespace std; 

class Student{
	
	private :
	char name[20];
	public:
		Student()
		{
			strcpy(name,"akshay");
		}
		void display()
		{
			cout<<"name:"<<name<<endl;
		}
	
}; 
int main () 
{  

	//write the data
  	ofstream obj;
  
  	obj.open("abc.text" ,ios::binary| ios :: app );
  	Student s1,s2;
  	s1.display();
	obj.write((char*) &s1 ,sizeof(Student));
	obj.close();
	
	//read data
	
	while(ifstream input("abc.txt",ios::binary))
	{
		input.read((char*)&s2,sizeof(Student)
		s2.display();
	}
  	input.close();
;   return 0;  
}  
