//memory management NEW(dynamic memory allocation)
//synatx(data_type *pointer_name=new data_type() );		//this new allocates the memory using pointer in run time 


//program using new 
/*
#include<iostream>
using namespace std;

class Test
{
	private:
		int data;
		
	public:
		void setdata(int set)
		{
			data=set;
		}
		
	int getvalue()
	{
		return data;
	}
};

int main()
{	
	//here the class object T is created with pointer
		
	Test *T=new Test;		//here the pointer request the memory in run time and allocates a memory
	
	T->setdata(10);		//the -> sign is used to setdata in memory  using pointer
	
	cout<<"Value is "<<T->getvalue()<<endl;		
	
	return 0;
}
*/





//Memory Management DELETE

//used to deallocate memory
//synatx for deallocating memory is int *ptr=new int -----------> use delete ptr;		after the work is done
//synatx for deallocating block of memory is int *ptr=new int[] -----------> use delete[] ptr;		after the work is done







//program
/*
#include<iostream>
using namespace std;

class Car
{
	private:
		int weight;
		
	public:
		void setweight(int wgt)
		{
			weight = wgt;
		}
	
		int getweight()
		{
			return weight;
		}
};

class BMW
{
	private:
		int topspeed;
		Car *c;		//class car is called internally in class BMW
		
	public:
		BMW(int w=0,int tspeed=0)
		{
			c =new Car;		//here class car is used to request memory in run time to set value
			
			c->setweight(w);		//using the pointer of Car *c we are setting the weightin class Car
			
			topspeed=tspeed;	//initiallizing topspeed in class BMW
		}
		
		
		int getweight()
		{
			return c->getweight();		//to get the value of car in class Car using the pointer
		}
		
		int gettspeed()
		{
			return	topspeed;
		}
		
		~BMW()		//destructor(~) is used to deallocate the memory allocated dynamically
		{
			delete c;
		}
		
};

int main()
{
	BMW b(3000 , 400);		//passing values in BMW of weight and topspeed
	
	cout<<"Weight of car in kg is "<<b.getweight()<<endl;
	
	cout<<"Topspeed of car in km/hr is "<<b.gettspeed()<<endl;
	
	return 0;
}
*/
