#ifndef CIRCLE_H
#define CIRCLE_H

#include "BasicShape.h"

//Class description- The Circle class inherits from BasicShape. It has three private instance 
//variables, xCenter, yCenter, and radius (all doubles). The calcArea function in the Circle 
//class calculates the area of the circle. Accessors (getters) are provided for each of the 
//instance variables defined in the Circle class. 
class Circle : public BasicShape {
private:

    //Class member variables:
    double xCenter;
    double yCenter;
    double radius;

public:

    //Circle Constructor
    //inputs=values for class member variables for xCenter, yCenter, and radius (all doubles),
    //as well as the name (a string) for the base class.
    //output=none.
    //preconditions=none, it's the class constructor.
    //postcondition=the Circle class object is created with the values passed
    //in as parameters (or the default parameters)
    Circle(double x, double y, double r, string n = "Circle");

    //calcArea-This function implements (overrides) the pure virtual function in the base class
    //BasicShape. 
    //inputs=none
    //output=the area, a double
    //preconditions=the object must be created first using the constructor.
    //postcondition=the calculated value for the area of a circle, a double, is returned.
    double calcArea() override;

    //Accessors for the class member variables:

    //getXCenter-Returns the value for the xCenter class member variable.
    //inputs=none
    //output=the xCenter, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for xCenter is returned.
    double getXCenter() { return xCenter; }

    //getYCenter-Returns the value for the yCenter class member variable.
    //inputs=none
    //output=the yCenter, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for yCenter is returned.
    double getYCenter() { return yCenter; }

    //getRadius-Returns the value for the radius class member variable.
    //inputs=none
    //output=the radius, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for radius is returned.
    double getRadius() { return radius; }
};

#endif // CIRCLE_H
