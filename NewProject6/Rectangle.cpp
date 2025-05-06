#include "Rectangle.h"

//Constructor 
//inputs=values for class member variables for length and width (both doubles),
//as well as the name (a string) for the base class.
//output=none.
//preconditions=none, it's the class constructor.
//postcondition=the Rectangle class object is created with the values passed
//in as parameters (or the default parameters)
Rectangle::Rectangle(double l, double w, string n) {
    length = l;
    width = w;

    setName(n);
    double rectangleArea = calcArea();
    setArea(rectangleArea);
}

//Rectangle CalcArea-This function implements (overrides) the pure virtual function in the base class
//BasicShape. 
//inputs=none
//output=the area, a double
//preconditions=the object must be created first using the constructor.
//postcondition=the calculated value for the area of a rectangle, a double, is returned.
double Rectangle::calcArea() {
    return(length * width);
}