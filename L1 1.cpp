#include<iostream>
using namespace std;

class Students{
	
	private:
		
		int stu_id; 
		char stu_name[100];
		int stu_age;
		char stu_course[100];
		char stu_email[100];
		char stu_city[100];
		char stu_college[100];
		
	public:
	
	    void setter(){
	    	
	    cout<<"ENTER THE stu_id= ";
		cin>>stu_id;
		cout<<"ENTER THE stu_name= ";
		cin>>stu_name;
		cout<<"ENTER THE stu_age= ";
		cin>>stu_age;
		cout<<"ENTER THE stu_course= ";
		cin>>stu_course;
		cout<<"ENTER THE stu_email= ";
		cin>>stu_email;
	    cout<<"ENTER THE stu_city= ";
		cin>>stu_city;
	    cout<<"ENTER THE stu_college= ";
		cin>>stu_college;
		
		}		
		void getter(){
			
			cout<<"your value of stu_id = "<<stu_id<<endl;
			cout<<"your value of stu_name = "<<stu_name<<endl;
			cout<<"your value of stu_age = "<<stu_age<<endl;
			cout<<"your value of stu_course = "<<stu_course<<endl;
			cout<<"your value of stu_email = "<<stu_email<<endl;
			cout<<"your value of stu_city = "<<stu_city<<endl;
			cout<<"your value of stu_college = "<<stu_college<<endl;	
		}		
};

main(){
	
	Students obj;
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();
	
	obj.setter();
	obj.getter();	
}
