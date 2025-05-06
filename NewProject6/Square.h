#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

//Class description- The Square class inherits from Rectangle. It has one private instance 
//variable, side, a double. An accessor (getter) is 
// provided for the instance variable defined in the Square class. 
class Square : public Rectangle {
private:

    //Class member variable:
    double side;

public:

    //Square Constructor
    //inputs=values for class member variable for side (a double),
    //as well as the name (a string) for the derived class, Rectangle.
    //output=none.
    //preconditions=none, it's the class constructor.
    //postcondition=the Square class object is created with the values passed
    //in as parameters (or the default parameters)
    Square(double s, string n = "Square")
        : Rectangle{ s, s, n },
        side{ s } {
    }

    //Accessor for the class member variable:

    //getSide-Returns the value for the side class member variable.
    //inputs=none
    //output=the side, as a double.
    //preconditions=the object must be created first using the constructor.
    //postcondition=the value for side is returned.
    double getSide() { return side; }
};

#endif