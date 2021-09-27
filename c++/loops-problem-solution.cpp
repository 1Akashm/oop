//loops problems and solutions.
//wap to calculate sum of n natural number.
/*
#include<iostream>

using namespace std;

int main()
{
	int n;	//to give the number to how many time the loop is executed
	int sum=0;		//to sum the total number
	
	cout<<"Enter the number : ";
	cin>>n;				//user input
	
	for(int i=1;i<=n;i++)	//loop is declared
	{
		sum=sum+i;
	}
	
	cout<<"Sum of n natural number is "<<sum;		//the total sum is displayed 
}
*/


//prime number 
/*
#include<iostream>

using namespace std;

int main()
{
	int num,f,i;		//variable declaration.
	
	cout<<"Enter the number(any) : ";		//user input
	
	cin>>num;
	
	f=0;		//value is set 
	i=2;
	
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)		//the check if number is 0 or 1 as they are not prime nor composite.
		{
			f=1;			//if the value of f changes to 1 it breaks the block and further execution is done.
			break;
		}
	}
	
	if(f==1)
	{
		cout<<"the number "<<num<<" is  a prime number.";
	}
	
	else
	{
		cout<<"the num "<<num<<" is not prime.";
	}
	
	return 0;
}

*/



