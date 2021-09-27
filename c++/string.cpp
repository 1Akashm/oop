//STRING IN C++

/*
//string concatenation(addition of string)->string is used to store multiple charater instead of writting character in multiple line using char datatype
#include<iostream>
using namespace std;

int main()

{
	string firstname="Akash";
	string lastname="Magar";
	
	string fullname=firstname + lastname;//we can also use string fullname=firstname.append lastname.
	
	cout<<fullname;
	
	return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()

{
	string firstname="10";
	int lastname=20;
	
	string fullname=firstname + lastname;//this gives error as concatenation cannot be done with two different datatypes 
	
	cout<<fullname;
	
	return 0;
}
*/


/*
#include<iostream>
using namespace std;

int main()

{
	string firstname="10";
	string lastname="20";
	
	string fullname=firstname + lastname;// this will give 1020 instead of 30 as they are string datatype not int datatype
	
	cout<<fullname;
	
	return 0;
}
*/


/*
//STRING LENGTH

#include<iostream>
using namespace std;

int main()

{
	string name="Akash"; 
	
	cout<<"length = "<<name.length();  //using this function we can know the lenth of string.
	
						//instead of variable_name.lenth,we can use variable_name.size() to calculate the length of string.
	
	return 0;
}
*/

/*
//USER INPUT STRING

#include<iostream>
using namespace std;

int main()

{
	string name;
	
	cout<<"Enter yor name :";
	cin>>name;
	
	cout<<name;		//but if we input AKASH sapce Magar the character after sapce is not displayed so we can solve it by using solution from  program written below. 
	
	return 0;
}

*/

/*
#include<iostream>
using namespace std;

int main()

{
	string name;
	
	cout<<"Enter yor name :";
	getline(cin,name);		//using getline(cin,variable_name) function we can solve the problem of above program.
	
	cout<<name;	 
	
	return 0;
}

*/



