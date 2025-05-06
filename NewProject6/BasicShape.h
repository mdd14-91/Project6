#ifndef BASICSHAPE_H
#define BASICSHAPE_H

#include <string>
using namespace std;

//Class description- The BasicShape class is an abstract base class that has two private 
//instance variables: area (a double), and name (a string). Getters and setters for these 
//instance variables are provided. A pure virtual function, calcArea will be implemented 
//in the classes derived from the abstract BasicShape class. 
class BasicShape {

private:

	//Class member variables:
	double area;
	string name;

public:

	//BasicShape Constructor
	//inputs=values for class member variables for area (a double) and name (a string)
	//output=none.
	//preconditions=none, it's the class constructor.
	//postcondition=the BasicShapes class object is created with the values passed
	//in as parameters (or the default parameters)
	BasicShape(double a = 0.0, string n = "") : area{ a }, name{ n } {}

	//BasicShape Virtual destructor
	//inputs=none
	//output=none
	//preconditions=the object must be created first using the constructor.
	//postcondition=memory is deallocated correctly; the object
	//no longer exists.
	virtual ~BasicShape() = default;

	//calcArea-A pure virtual function which will be implemented in the classes derived from 
	//the abstract BasicShape class
	//inputs=none
	//output=the area, a double
	//preconditions=the object must be created first using the constructor.
	//postcondition=the calculated value for area, a double, is returned.
	virtual double calcArea() = 0;

	//Mutators and accessors for the class member variables:

	//setArea-Stores the value for the area of a shape.
	//inputs=the area, as a double.
	//output=none
	//preconditions=the object must be created first using the constructor.
	//postcondition=the value for area is updated.
	void setArea(double a) { area = a; }

	//setName-Stores the value for the name of a shape.
	//inputs=the name, as a string.
	//output=none
	//preconditions=the object must be created first using the constructor.
	//postcondition=the value for name is updated.
	void setName(string n) { name = n; }

	//getArea-Returns the value for the area of a shape.
	//inputs=none
	//output=the area, as a double.
	//preconditions=the object must be created first using the constructor.
	//postcondition=the value for area is returned.
	double getArea() { return area; }

	//getName-Returns the value for the name of a shape.
	//inputs=none
	//output=the name, as a string.
	//preconditions=the object must be created first using the constructor.
	//postcondition=the value for name is returned.
	string getName() { return name; }
};

#endif // BASICSHAPE_H