//array is used to store multiple values in a single contiguous memory location.
//instead of declaring multiple variable we can use aeeay to store same data type in single block

//intialozation of array-	variable_name[......]={".........","....>",.....};

//we can access the array by using the index.

		//	|25|35|45|60|	->these are the data stored in array
		//	0	1	2	3  ->these are the index
		
//if we want to change the data of array we can simply use   ------>	variable_name[index-no]=".....";


/*
//Wap to take 5 no. input and finding the minimum no.

#include<iostream>

using namespace std;

int main()
{
	int arr[5]={0};	//initiallizing array 
	
	for(int i=0;i<5;i++)	
	{
		cout<<"Enter the no. in "<<i<<" index : ";
		cin>>arr[i];
	}
	
	int min=arr[0];		//assume 0(zero index has minimum value and storing that value in min variable.
	
	for(int i=1;i<5;i++)	//here i=1 because 0 is used as minimum value already
	{
		if(min>arr[i])  	//if the value of min which has index 0 is greater then replace the value of min with arr[index] value
		{
			min=arr[i];		//replaces the in min.
		}
	}
	
	cout<<"\nthe minimum value is, "<<min;
	
	return 0;	
}
*/


/*
//program to find max number

#include<iostream>

using namespace std;

int main()
{
	int arr[5]={0};
	
	for(int i=0;i<5;i++)
	{
		cout<<"Enter the no. in "<<i<<" index : ";
		cin>>arr[i];
	}
	
	int max = arr[0];
	
	for(int i=1;i<5;i++)
	{
		if(max<arr[i])		//only the condition is change in max no. calculation
		{
			max=arr[i];
		}
	}
	
	cout<<"\n The maximum number is "<<max;
	
	return 0;
}

*/










