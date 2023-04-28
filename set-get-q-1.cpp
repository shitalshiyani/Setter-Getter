#include<iostream>

using namespace std;

class Student
{
	private :
		int roll_no;
		char name[100];
		int std;
		char contact[20];
		char add[100];
		
	public :
		void setData()
		{
			cout<<"Enter Student Roll No.=";
			cin>>roll_no;
			cout<<"Enter Student Name=";
			cin>>name;
			cout<<"Enter Student Standard=";
			cin>>std;
			cout<<"Enter Student Contact No.=";
			cin>>contact;
			cout<<"Enter Student Address=";
			cin>>add;
		}
		
		void getData()
		{
			cout<<"Roll No.="<<roll_no<<endl;
			cout<<"Name="<<name<<endl;
			cout<<"Standard="<<std<<endl;
			cout<<"Contact No.="<<contact<<endl;
			cout<<"Address="<<add<<endl;
			
		}
};
main()
{
	Student s1,s2,s3,s4,s5;
	
	s1.setData();
	s2.setData();
	s3.setData();
	s4.setData();
	s5.setData();
	
	s1.getData();
	s2.getData();
	s3.getData();
	s4.getData();
	s5.getData();
}
