#include<iostream>

using namespace std;

class Employee
{
	private :
		int id;
		char name[100];
		char company_name[100];
		int salary;
		char add[100];
		
	public :
		void setData()
		{
			cout<<"Enter Employee Id=";
			cin>>id;
			cout<<"Enter Employee Name=";
			cin>>name;
			cout<<"Enter Employee Company Name=";
			cin>>company_name;
			cout<<"Enter Employee Salary=";
			cin>>salary;
			cout<<"Enter Employee Address=";
			cin>>add;
		}
		
		void getData()
		{
			cout<<"Id="<<id<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Company Name="<<company_name<<endl;
			cout<<"Salary="<<salary<<endl;
			cout<<"Address="<<add<<endl;
		}

};

main()
{
	Employee e1,e2,e3,e4,e5;
	
	e1.setData();
	e2.setData();
	e3.setData();
	e4.setData();
	e5.setData();
	
	e1.getData();
	e2.getData();
	e3.getData();
	e4.getData();
	e5.getData();

	
}
