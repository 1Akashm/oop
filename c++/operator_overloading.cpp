/*
//operator overloading


#include<iostream>
using namespace std;

class Count
{
	private:
		int x;
		
	public:
//		Count (int y)			
//		{
//			x=y;
//		}
//		
//	void operator ++()
//	{
//		++x;
//	}
	
	
	//we can use either above or below to overload operator
	
	
	//initializing value with 5
	Count() : x(5){
	}
	
	void operator ++()
	{
		++x;
	}
	
	
	void display()
	{
		cout<<"Count : "<<x;
	}
};

int main()
{
	Count c1;		//c1(5) if we use the program above which has parameterized constructor
	
	//call the void opeartor ++
	++c1;
	
	//to display
	c1.display();
	return 0;
}
*/




//another operator overloading program
/*
#include<iostream>
using namespace std;

class A
{
	private:
		int weight;
		
	public:
		A (int x=0)
		{
			weight=x;
		}
		
	void display()
	{
		cout<<"weight is, "<<weight;
	}
	
	A operator+(A w)		//here w is the value of object after + signed is used. in this case w is the value of person 2
	{
		A temp;		//another object is created to return the value 
		
		temp.weight=weight + w.weight;		//here first the weight is of calling object ie person 1 and w.weight is person2 value
		return temp;
	}
};


	
	
int main()
{
	int a=50,b=60,c=0;
	
	c=a+b;
	
	cout<<"\nTotal of 'a' and 'c' is "<<c<<"\n";
	
	//operator overloading
	
	A person1(60);			//object is created for class and value is passed 
	A person2(70);
	
	A total;		//this total will take the default value ie 0.
	
	total = person1+person2;		//we called the operator overloading for + 
	
	total.display();
	return 0;
}

*/






//++(double)operator or unary operator
/*
#include<iostream>
using namespace std;

class Person
{
	private:
		int weight;
	
	public:
		Person (int z)
		{
			weight=z;
		}
		
	Person operator ++()	//overator overloading is declared
	{
		++weight;	//preincrement is done here
	}
	
	void display()
	{
		cout<<"Weight of person after preincrement is, "<<weight<<endl;
	}
		
};

int main()
{
	int a=5;
	++a;
	
	cout<<"preincrement of 'a'=5 is, "<<a<<endl;
	
	
	//operator overloading
	Person me(50);		//object is created and passed value
	
	++me;		//operator overloading is called
	me.display();
	
	return 0;
	
}
*/



//using post-increment
/*
#include<iostream>
using namespace std;

class Person
{
	private:
		int weight;
	
	public:
		Person (int z)
		{
			weight=z;
		}
		
	Person operator ++()	//overator overloading is declared
	{
		++weight;	//preincrement is done here
	}
	
	Person operator ++(int)	//for post increement we pass int as argument
	{
		weight++;
	}
	
	void display()
	{
		cout<<"Weight of person after preincrement is, "<<weight<<endl;
	}
		
};

int main()
{
	int a=5;
	++a;
	
	cout<<"preincrement of 'a'=5 is, "<<a<<endl;
	
	
	//operator overloading
	Person me(50);		//object is created and passed value
	
	++me;		//operator overloading is called
	
	me++;		//post-increment
	
	me.display();
	
	return 0;
	
}
*/
