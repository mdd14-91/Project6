#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "BasicShape.h"

//Class description- The Rectangle class inherits from BasicShape. It has two private instance 
//variables, length and width (doubles). The calcArea function in the Rectangle class calculates
//the area of the rectangle. Accessors (getters) are provided for each of the instance variables 
//defined in the Rectangle class. 
class Rectangle : public BasicShape {
private:

    //Class member variables:
    double length;
    double width;

public:

    //Rectangle Constructor
    //inputs=values for class member variables for length and width (both doubles),
    //as well as the name (a string) for the base class.
    //output=none.
    //preconditions=none, it's the class constructor.
    //postcondition=the Rectangle class object is created with the values passed
    //in as parameters (or the default parameters)
    Rectangle(double l, double w, string n = "Rectangle");

    //calcArea Rectangle-This function implements (overrides) the pure virtual function in the base class
    //BasicShape. 
    //inputs=none
    //output=the area, a double
    //preconditions=the object must be created first using the constructor.
    //postcondition=the calculated value for the area of a rectangle, a double, is returned.
    double calcArea() override;

    //Accessors for the class member variables:

    //getLength-Returns the value for the length class member variable.
    //inputs=none
    //output=the length, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for length is returned.
    double getLength() { return length; }

    //getWidth-Returns the value for the width class member variable.
    //inputs=none
    //output=the width, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for width is returned.
    double getWidth() { return width; }
};

#endif // RECTANGLE_H

