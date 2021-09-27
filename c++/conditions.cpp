/*
//IF-CONDITION	
#include <iostream>
using namespace std;

int main ()
{
    int marks=0;

    cout<<"Enter your marks";
    cin>>marks;

    if (marks>=60)
    {
        cout<<"Excellent,You pass.";
        return 0;
    }
    

    return 0;
}

*/

/*
//IF ELSE-CONDITION

#include <iostream>
using namespace std;

int main ()
{
    int marks=0;

    cout<<"Enter your marks : ";
    cin>>marks;

    if (marks>=60)
    {
        cout<<"Excellent,You pass.";
    }
    
    else
    {
    	cout<<"You need to work hard.";
	}

    return 0;    
}

*/


/*
//we need to calculate marks upto 100 and dont exceed from 100 so we use logical operation

#include <iostream>
using namespace std;

int main()
{
	    int marks=0;

    cout<<"Enter your marks : ";
    cin>>marks;

    if (marks>=60 && marks<=100)  //but it shows the result of else block as if block is false when we input marks greater than 100...so we need to fix it as follow  by using 
								  // else if condition 
    {
        cout<<"Excellent,You pass.";
    }
    
    else
    {
    	cout<<"You need to work hard.";
	}

    return 0; 	
}

*/


/*
//ELSE IF-CONDITION
#include <iostream>
using namespace std;

int main()
{
	    int marks=0;

    cout<<"Enter your marks : ";
    cin>>marks;

    if (marks>=60 && marks<=100
								  
    {
        cout<<"Excellent,You pass.";
    }
    
    else if(marks >= 0 && marks <= 60)  //here if part marks >=60 and else if part marks <=60 are same but if part result is execute as if part is true and until it is false other 
    									//block wont execute.
    {
    	cout<<"You need to work hard.";
	}
    
    else
    {
    	cout<<"Invalid Input";
	}

    return 0; 	
}

*/

/*
//SWITCH CASE

#include<iostream>
using namespace std;

int main()
{
	int day;
	
	cout<<"Enter number between (1-7) : ";
	cin>>day;
	
	switch(day)
	{
		case 1:
			cout<<"Monday";
			break;					//break is used to terminate the block once the condition is met and display the reult accordingly. If block is not used then all the cases will 
									//execute and it will display all the result.
			
		case 2:
			cout<<"Tuesday";
			break;
			
		case 3:
			cout<<"Wednesay";
			break;
			
		case 4:
			cout<<"Thursday";
			break;
			
		case 5:
			cout<<"Friday";
			break;
			
		case 6:
			cout<<"Saturday";
			break;
			
		case 7:
			cout<<"Sunday";
			break;
			
		default:			//default is used in switch if user give wromg input and the condition above is not met then we can display them error using default statement. 
			{
				cout<<"Invalid Input.";
			}
			
	}
	

	
	return 0;
}
*/


    
    
