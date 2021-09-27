//constructor overload

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
			
			//here the value assigned to parameters of parameterized constructor are the default constructor due to which constructor are overloaded and line of code and time is managed
		A (string name_a="o",int age_a=0,float height_a=0)		//parameterized constructor is called
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


//program of constructor

//wap to take phone details as input and store them in object using constructor .....name,ram,processor,battery etc.

/*
#include<iostream>

using namespace std;

class Phone
{
	private:
		string name;
		string processor;
		int ram;
		int battery;
		
	public:
		Phone (string name_a="Null",string processor_a="zzz",int ram_a=0,int battery_a=0)
		{
			name=name_a;
			processor=processor_a;
			ram=ram_a;
			battery=battery_a;
		}
		
//		void getdata()			//using finction to take the data from user if constructor is not used
//		{
//				cout<<"Enter the data of phone below."<<endl;
//	
//			cout<<"\nEnter the name :\n";
//			cin>>name;
//	
//			cout<<"\nEnter the processor of phone :\n";
//			cin>>processor;
//	
//			cout<<"\nEnter the ram of phone :\n";
//			cin>>ram;
//	
//			cout<<"Enter the battery of phone :\n";
//			cin>>battery;	
//		}
		
		void display();
		
};

void Phone:: display()		//we can declare the body inside the class and call its value from outside as follow
{
	{
			cout<<"\nName of phone is , "<<name<<endl;
			cout<<"\n";
			cout<<"Processor used is , "<<processor<<endl;
			cout<<"\n";
			cout<<"Ram of phone is , "<<ram<<" Gb."<<endl;
			cout<<"\n";
			cout<<"Battery is , "<<battery<<" mwh."<<endl;
			cout<<"\n";
		}
}

int main()
{
	Phone ph1,ph("oppo","Snapdragon",8,4200);
	
//	ph.getdata();	//if constructor is not used we can use function also
	//from default cinstructor which is overloaded to parameterized constructor
	cout<<"\nDefault constructor which is overloaded to parameterized constructor .\n";
	ph1.display();
	
	cout<<"parameterized constructor.\n";
	ph.display();
	return 0;
	
}
*/


