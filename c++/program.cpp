//wap to take firstname,lastname and address as input and print fullname and address in console.

#include<iostream>
using namespace std;

int main()
{
	string firstname,lastname,fullname,address;
	
	cout<<"Enter your first_name : ";
	cin>>firstname;
	
	cout<<"Enter last last_name :";
	cin>>lastname;
	
	fullname=firstname + lastname;
	
	cout<<"Enter your address :";
	cin>>address;
	
	cout<<"Your fullname is :"<<fullname<<endl;
	
	cout<<"Your address is :"<<address;
	
	return 0;
}
