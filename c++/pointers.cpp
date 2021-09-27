//pointer is used to store the address of data
//  Three section of memory are...
	/*
	 -------------------
	|		heap		|	dynamically allocated momory.This cannot be accessed by code.So,to overcome this,pointed are declared to dynamically memory allocation as below
	|-------------------|
	|	stack			|
	|					|	the variable declared in code is stored here.This can be accessed by code.
	|-------------------|
	|	var	|	...		|	
	|-------------------|
	|	code{			|
	|	}				|	here the entire code is executed
	|					|
	---------------------
	
	*/
	
	/*
	-------------------
	|		heap		|	dynamically allocated momory.This cannot be accessed by code.So,to overcome this,pointed are declared to dynamically memory allocation as below
	|-------------------|
	|	stack			|
	|					|	the variable declared in code is stored here.This can be accessed by code.
	|...................|
	|		|	pointer	|	with the help of pointer the heap can be accessed by code dynamically.
	|-------------------|
	|	code{			|
	|	}				|	here the entire code is executed.
	|					|
	---------------------
	*/
	
//notation of pointer is data_type *pointer_name.	
	
	
	//program to use pointer
/*	
#include<iostream>
using namespace std;

int main()
{
	int num=10;
	
	//pointer declaration 
	int *ptr=NULL;		//set to null because *ptr has garbage value
	
	ptr=&num;	//address of num is stored
	
	cout<<"ptr :"<<ptr<<endl;	//gives the address of num stored
	
	cout<<"*ptr :"<<*ptr;	//gives the value stored in that memory location
	
	return 0;
}
*/




//pointers and array
/*
#include<iostream>
using namespace std;

int main()
{
	int arr[5]={10,20,30,40,50};
	
	int *ptr=&arr[0];		//or arr;
	
	for(int i=0;i<5;i++)
	{
		cout<<"address of : "<<i<<" is "<<(ptr+i)<<endl;	//gives the address of data
			
		cout<<"value of : "<<i<<" is "<<*(ptr+i)<<endl;	//gives the data at i index 
		
		cout<<"\n";
	}
	
	return 0;
}
*/





//pointer and function
/*
#include<iostream>
using namespace std;

void square(int *ptr);	//pointer is created in function with variable square

int main()
{
	int num;
	
	num=10;
	
	cout<<"Before "<<num<<endl;
	
	square(&num);	//address is passed to pointer in the function void square(int *ptr) but *ptr have value of num
	
	cout<<"After "<<num<<endl;
	
	return 0;
}

void square(int *ptr)	//function is created 
{
	int temp;
	temp=*ptr;		//value stored in *ptr ie, 10 is passed to temp
	
	temp=temp*temp;
	
	*ptr=temp;		//value calculated above is again returned to *ptr

}
*/





//pointer and function(passing array)
/*
#include<iostream>
using namespace std;

const int MAX=5;		//here the const keyword is set and a variable MAX is set to 5.

void print_array(int *ptr);

int main()
{
	int num[MAX]={10,20,30,40,50};		//array is initialized with values
	
	print_array(&num[0]);		//address is passed and function is called here.	or we can use print_array(num).
	
	return 0;
}

void print_array(int *ptr)
{
	for(int i=0;i<MAX;i++)
	{
		cout<<"values stored in array "<<*ptr++<<endl;
	}
}

*/



