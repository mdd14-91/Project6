#include <iostream>
#include "BasicShape.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

//Main-This function is used to test the classes in the assignment. It declares an array of pointers
//to BasicShape, the base class for the other three classes, then creates the test classes and
//fills the array with pointers to the created classes. Finally, the function loops through the
//array calling functions in each class to print out the name and the area of each shape.
int main() {

	BasicShape* testArray[5];

	testArray[0] = new Rectangle(3.0, 4.0, "Rectangle1");
	testArray[1] = new Rectangle(5.0, 6.0, "Rectangle2");
	testArray[2] = new Circle(1.0, 2.0, 7.0, "Circle1");
	testArray[3] = new Circle(1.5, 2.5, 8.0, "Circle2");
	testArray[4] = new Square(5.0, "Square1");

	for (int i = 0; i < 5; i++) {
		cout << testArray[i]->getName() << " : area = "
			<< testArray[i]->getArea() << endl;

		//Clean up memory allocated earlier:
		delete testArray[i];
	}
	cout << endl;
}