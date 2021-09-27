//base class pointer and derived class object

//creating the pointer for base class and object for derived class
	// syntax:		Base_class *ptr;
	//				ptr=new Derived_class ;

/*
	if
	class Base
	{
	public:
	void body();
	void window();
	void Tyre();
};

	class Derived
	{
	public:
	void ABS();
	void PS();
	void ENGINEV8();
};

	int main()
	{
		Base *ptr;
		ptr=new Derived();				here the object of derived class cannot access the feature of derievd class only the feature of base class can be accessed
		
		ptr->body();
		ptr->window();
		ptr->Tyre();
		
		return 0;
}

*/



//virtual function
//this function is used if multiple class has same function and when we call the function using pointer the the function of base class is called every time instead of other class so 
//to display the function of other class the function of base base class is made virtual which makes the function invisible and other function of other class is used accordingly.


//program
/*
#include<iostream>
using namespace std;

class Base
{
	public:
		virtual  void show()		//using virtual function in base class the function of derived1 and derived2 class will be called. 
		{
			cout<<"Base."<<endl;
		}
};


class Derived1:public Base
{
	public:
		void show()
		{
			cout<<"derived1."<<endl;
		}
};


class Derived2:public Base
{
	public:
		void show()
		{
			cout<<"derived2."<<endl;
		}
};

int main()
{
	Derived1 d1;
	Derived2 d2;
	
	Base *ptr;
	ptr=&d1;
	
	ptr->show();
	
	
//	Base *ptr;			//if we dont use the virtual function inside the function of base class it will only call the base class function ie,void show().
	ptr=&d2;
	
	ptr->show();
	
	return 0;
}

*/




//ABSRTACT CLASS

//pure vrirtual function
/*
#include<iostream>
using namespace std;

class Parent	//abastract class(used only to behave as parent of derived classes)
{
	public:
		virtual void give()=0;		//pure virtual function doesnot have body part
};

class Boy:public Parent
{
	public:
		void give()
		{
			cout<<"Brown bun."<<endl;
		}
};

class Girl:public Parent
{
	public:
		void give()
		{
			cout<<"Pink bun."<<endl;
		}
};

int main ()
{
	Boy b;
	Girl g;
	
	Parent *ptr=NULL;
	
	ptr=&b;
	ptr->give();
	
	ptr=&g;
	ptr->give();
	
	return 0;
}

*/


