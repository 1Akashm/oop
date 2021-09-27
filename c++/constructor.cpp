//constructors are created to directly access the data without intermediator which hepls to improve the misunderstanding of information and consumes less time
//it doesnot have return type like function and must have same name as class

//default constructor
/*
#include<iostream>

using namespace std;

class A
{
	private:
		string name;
		int age;
		float height;
		
	public:
		
//		A ()		//default constructor or non parameterized constructor 
//		{
//			name="AKASH";		//even we dont give the data to variable the default constructor will get called and some other data will be displayed
//			age=21;
//			height=5.9f;
//		}
		
	void displaydata()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Height : "<<height;
	}
};

int main()
{
	A obj;	//object is made of class A
	
	obj.displaydata();		//we dont need the intermediator to pass the value 

}

*/


//parameterized constructor
/*
#include<iostream>

using namespace std;

class A
{
	private:
		string name;
		int age;
		float height;
		
	public:
		
		A ()		//default constructor or non parameterized constructor 
		{
			name="AKASH";		//even we dont give the data to variable the default constructor will get called and some other data will be displayed
			age=21;
			height=5.9f;
		}
		
		A (string name_a,int age_a,float height_a)		//parameterized constructor is called
		{
			name=name_a;				//values are assigned to member variable with parameters given
			age=age_a;
			height=height_a;
		}
		
	void displaydata()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Height : "<<height;
	}
};

int main()
{
	A obj,obj2("jhon",19,6);	//object is made of class A					and obj2(these values are passed to name_a,age_a,height_a) and assigned to name , age , and height
	
	cout<<"non-parameterized constructor\n";
	//obj is called for default constructor
	obj.displaydata();		//we dont need the intermediator to pass the value 
	
	cout<<"\n";
	cout<<"\n";
	cout<<"parameterized constructor\n";
	//obj2 is called for parameterized constructor
	obj2.displaydata();
	
	return 0;
}
*/




//copy constructor

/*
#include<iostream>

using namespace std;

class A
{
	private:
		string name;
		int age;
		float height;
		
	public:
		
		A ()		//default constructor or non parameterized constructor 
		{
			name="AKASH";		//even we dont give the data to variable the default constructor will get called and some other data will be displayed
			age=21;
			height=5.9f;
		}
		
		A (string name_a,int age_a,float height_a)		//parameterized constructor is called
		{
			name=name_a;				//values are assigned to member variable with parameters given
			age=age_a;
			height=height_a;
		}
		
		A (A &obj2)		//copy constructor and the &obj2 is used as reference data for copy constructor as we need the same data as the obj 2 
		{
			name=obj2.name;
			age=obj2.age;
			height=obj2.height;
		}
		
	void displaydata()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
		cout<<"Height : "<<height;
	}
};

int main()
{
	A obj,obj2("jhon",19,6);	//object is made of class A					and obj2(these values are passed to name_a,age_a,height_a) and assigned to name , age , and height
	
	A obj3(obj2);		//we are passing the data of obj2 to copyconstructor obj3
	
	cout<<"non-parameterized constructor\n";
	//obj is called for default constructor
	obj.displaydata();		//we dont need the intermediator to pass the value 
	
	cout<<"\n";
	cout<<"\n";
	cout<<"parameterized constructor\n";
	//obj2 is called for parameterized constructor
	obj2.displaydata();
	
	cout<<"\n";
	cout<<"\n";
	
	cout<<"Copy constructor(which has the same data as parameterrized constructor)\n";
	obj3.displaydata();
	
	return 0;
}
*/
