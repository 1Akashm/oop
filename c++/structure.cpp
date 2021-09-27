//STRUCTURE

//symtax
	/*
		struct user-definded datatype
		{
			various datatype can be writtn in structure block
			int variable;
			float variable;
			double variable;
			string variable;
			etc....
	};		semi-colon is used at last of structure to close structure.
	*/
	


/*
//program to create a user defined datatype phone which contains members name,processor,ram,rom,camera,price using structure
#include<iostream>
#include<string>		//string header file is used as string datatype is declared 

using namespace std;

struct phone
{
	string name;
	string processor; 
	string camera;
	float price;
	int ram ;
	int rom ;
};

int main()
{
	phone ph;	//here ph variable is declared to our user-defined datatype to access the data of sturcture.
	
	ph.name="APPLE";
	ph.processor= "NIVIDA Geforce 3020TI";
	ph.camera="sony";
	ph.price=2000;
	ph.ram=16;
	ph.rom=258;
	
	
	//if we want to modify the data of structure
	
	ph.rom=128; // this will update the rom =258 to rom=128 and display 128 instead of 258.
	
	cout<<"price : "<<ph.price;
	cout<<"name : "<<ph.name<<endl;
	cout<<"camera : "<<ph.price<<endl;
	cout<<"rom : "<<ph.rom<<endl;
	cout<<"ram : "<<ph.ram<<endl;;
	
	cout<<"processor : "<<ph.processor<<endl;
	
	return 0;
}
*/



//nested structure

/*struct camera
		{
			int x;
	};
	
	
  struct phone
  		{
  			camera;		here camear which is user-defined datatype is nested inside another structure phone.
  			int y;
  		};
  		
  		
 */		
  	
	  

/*	
//the above program using nested strucutre

#include<iostream>
#include<string>		//string header file is used as string datatype is declared 

using namespace std;


struct camera
{
	int font;
	int rear;	
};

struct phone
{
	string name;
	string processor; 
	camera camera;	//here the camera which is user defined datatype of above structure is used in phone structure as a datatype to camera variable
	//we can change the value of camera variable with above struct data type
	float price;
	int ram ;
	int rom ;
};

int main()
{
	phone ph;	//here ph variable is declared to our user-defined datatype to access the data of sturcture.
	
	ph.name="APPLE";
	ph.processor= "NIVIDA Geforce 3020TI";
	ph.camera.font=32;		//here ph.camera.font is used to add the value in camera
	ph.camera.rear=16;		////here ph.camera.font is used to add the value in camera
	//by using the userdefined datatype of first structure to second structure we can easily add the content to any variable
	ph.price=2000;
	ph.ram=16;
	ph.rom=258;
	
	
	//if we want to modify the data of structure
	
	ph.rom=128; // this will update the rom =258 to rom=128 and display 128 instead of 258.
	
	cout<<"price : "<<ph.price<<endl;
	cout<<"name : "<<ph.name<<endl;
	cout<<"camera-font : "<<ph.camera.font<<endl;
	cout<<"camera-rear : "<<ph.camera.rear<<endl;
	cout<<"rom : "<<ph.rom<<endl;
	cout<<"ram : "<<ph.ram<<endl;;
	
	cout<<"processor : "<<ph.processor<<endl;
	
	return 0;
}
*/
