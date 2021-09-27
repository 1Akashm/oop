//inheritance means acquiring the property of one class by anothe class

//we can use inheritance to add the property of base class to derived class and make some changes in program using the previous features

//wap to create class cuboid and inherite rectangle class amd calculate area and volume

/*
#include<iostream>
using namespace std;

class Rectangle
{
	public:
		int length;
		int breadth;
		int area;
		
	void calculate_area()
	{
		area=length*breadth;
	}
	
	void display_area()
	{
		cout<<"Area of rectangle is, "<<length*breadth<<endl;
	}
};

class Cuboid:public Rectangle
{
	public:
		int height;
		int volume;
		
		void calculate_volume()
		{
			volume=length*breadth*height;
		}
		
		void display_volume()
		{
			cout<<"Volume of cuboid is, "<<volume;
		}
};

int main()
{
	Cuboid c;			//we can created a single object for accessing the property for rectangle as class rectangle is inherited in class cuboid and use c.________ to provide/get data
	
	c.length=3,c.breadth=3,c.height=3;
	
	c.calculate_area();
	c.calculate_volume();
	
	c.display_area();
	c.display_volume();
	
	return 0;
	
}
*/
