#include<iostream>

using namespace std;

class Customers{
	
	private:
		
	  int cust_id; 
	  char cust_name[100];
	  int cust_age;
	  char cust_telecome_brand_name[100];
	  int cust_mobile_number;
	  char cust_city[100];
	  int cust_simcard_validity;
	  
	public:
	
	  void setter(){
	  	
	    cout<<"ENTER THE cust_id= ";
	    cin>>cust_id;
	    cout<<"ENTER THE cust_name= ";
	    cin>>cust_name;
	    cout<<"ENTER THE cust_age= ";
	    cin>>cust_age;
	    cout<<"ENTER THE cust_telecome_brand_name= ";
	    cin>>cust_telecome_brand_name;
	    cout<<"ENTER THE cust_mobile_number= ";
	    cin>>cust_mobile_number;
	    cout<<"ENTER THE cust_city= ";
	    cin>>cust_city;
	    cout<<"ENTER THE cust_simcard_validity= ";
	    cin>>cust_simcard_validity;
	  	
	  }
	  
	  void getter(){
	  	
	  		cout<<"your value of cust_id = "<<cust_id<<endl;
			cout<<"your value of cust_name = "<<cust_name<<endl;
			cout<<"your value of cust_age = "<<cust_age<<endl;
			cout<<"your value of cust_telecome_brand_name = "<<cust_telecome_brand_name<<endl;
			cout<<"your value of cust_mobile_number = "<<cust_mobile_number<<endl;
			cout<<"your value of cust_city = "<<cust_city<<endl;
			cout<<"your value of cust_simcard_validity = "<<cust_simcard_validity<<endl;
	  	
	  }	  	  	
};

main(){
	
	Customers obj;
	
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
