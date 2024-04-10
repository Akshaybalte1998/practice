#include<iostream>
using namespace std;



void employee()
{
   int sal ;
   char emp_name[30];
   cout<<"Enter name and Salary of Employee\n";
   cin>>emp_name>>sal;
  double DA,Gross_salary,IT,Net_salary;
  DA=0.52 * sal;
  Gross_salary=sal+DA;
  IT=0.3*Gross_salary;
  Net_salary=Gross_salary-IT;
  cout<<"Name ="<<emp_name<<endl;
  cout<<"Net Salary = "<<Net_salary<<endl;
  
}

int main1()
{

    int num_emp;
    cout<<"Enter Number of employee\n";
    cin>>num_emp;
    for(int i=1;i<=num_emp;i++)
    {        
	        
            cout<<"----------------------------------------------------------------\n";
    		employee();
	}

	return 0;
	
}
