#include "Circle.h"

const double pi = 3.14159265358979323846;

//Circle Constructor
//inputs=values for class member variables for xCenter, yCenter, and radius (all doubles),
//as well as the name (a string) for the base class.
//output=none.
//preconditions=none, it's the class constructor.
//postcondition=the Circle class object is created with the values passed
//in as parameters (or the default parameters)
Circle::Circle(double x, double y, double r, string n) {

    xCenter = x;
    yCenter = y;
    radius = r;

    setName(n);
    double circleArea = calcArea();
    setArea(circleArea);
}

//Circle CalcArea-This function implements (overrides) the pure virtual function in the base class
//BasicShape. 
//inputs=none
//output=the area, a double
//preconditions=the object must be created first using the constructor.
//postcondition=the calculated value for the area of a circle, a double, is returned.
double Circle::calcArea() {
    return (pi * radius * radius);
}