//#include<iostream>
//using namespace std;
//
//class Employee{
//	private:
//		int id;
//		string name;
//		double salary;
//		
//		public:
//	  Employee(int id, string name, double salary)
//	  {
//	  	cout<<"-------employee parameter constructor-------"<<endl;
//	  	  this->id=id;
//	  	  this->name= name;
//			this->salary= salary; 
//	  }
//	  
//	  void display()
//	  
//	  {
//	  	cout<<"Employee details is : "<<endl;
//		cout<<" ID:"<< id <<"  name:"<<name<<"Salary:"<<salary<<endl	;
//	  }
//};
//
//class Manager: virtual  public Employee
//{
//	private:
//	int depid;
//	double incentive;
//	
//	public:
//		Manager(int depid, double incentive,int id, string name,double salary):Employee(id,name,salary)
//		{
//		
//			cout<<"-------manager parameter constructor-------"<<endl;
//			this->depid= depid;
//			this->incentive= incentive;
//			
//		}
//	
//	void display()
//	  
//	  {
//	  	cout<<"Manager details is : "<<endl;
//		cout<<" depid:"<< depid <<"  incentive:"<<incentive<<endl	;
//	  }
//	  
//};
//
//class Saleperson: virtual  public Employee
//{
//	
//	private:
//		int pa,ta,fa;
//		
//	public:
//		Saleperson(int pa, int ta ,int fa,int id, string name,double salary):Employee(id,name,salary)
//		{
//		
//			cout<<"-------saleperson parameter constructor-------"<<endl;
//			this->pa=pa;
//			this->ta =ta;
//			this->fa =fa;
//			
//		}
//	
//	void display()
//	  
//	  {
//	  	cout<<"saleperson details is : "<<endl;
//		cout<<" pertol allowace:"<< pa <<" travels allowace:"<< ta <<" Food allowance:"<< fa <<endl	;
//	  }
//};
//
//class Salemanager: public Manager, public Saleperson
//{
//	private:
//		int advinc;
//		
//	public:
//		Salemanager(int advinc, int depid, double incentive,int id, string name,double salary,int pa, int ta ,int fa):Manager(depid,incentive,id,name,salary),Saleperson(pa,ta,fa,id,name,salary)
//		{
//			cout<<"-------Salemanager parameter constructor-------"<<endl;
//			this->advinc = advinc;	
//		}
//	
//	void display()
//	  
//	  {
//	  	cout<<"salemaager details is : "<<endl;
//		cout<<" Advinc:"<<advinc <<endl	;
//	  }
//};
//
//int main221()
//{
//	//employee class
///*	Employee e1(1,"Akshay ",50000.00);
//	e1.display();
//	cout<<"size of employee:"<<sizeof(e1)<<endl;// 24 */
//	
//	// manager class
////	Manager m1(201,6000.00,1,"Akshay ",50000.00);
////	m1.display();
////	cout<<"size of manager:"<<sizeof(m1)<<endl;  //16   // 40
////	
////	// saleperson class
////	Saleperson s1(500,700,1000,2,"pakaj",60000.00);
////	cout<<"size of saleperson:"<<sizeof(s1)<<endl;//12   //40
////	
//	Salemanager sm1(2500,201,6000.00,1,"Akshay ",50000.00,500,700,1000);
//	sm1.display();
//	cout<<"size of salemanager:"<<sizeof(sm1)<<endl;//12
//	return 0;
//}
