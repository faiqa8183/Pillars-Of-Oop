

#include "Circle.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <vector>
// don't worry about this library just consider it as a simple array
using namespace std;

void Print(vector<Shape *> shapesArray)
{
	for (int i = 0; i < shapesArray.size(); i++)
	{
		// enter some code here to know what type of pointer shape is? Hint: DownCasting
		Rectangle *rectangle = dynamic_cast<Rectangle*>(shapesArray[i]) ;
		if (rectangle != nullptr)
			cout << "The Rectangle Area is: ";

		Triangle *triangle = dynamic_cast<Triangle*>(shapesArray[i]);
		if (triangle != nullptr)
			cout << "The Triangle Area is: ";

		Circle *circle = dynamic_cast<Circle*>(shapesArray[i]);
		if (circle != nullptr)
			cout << "The Circle Area is: ";

		// Print its area
		cout << shapesArray[i]->GetArea() << endl;

		// Now lets print its dimensions
		shapesArray[i]->Print();
	}
}

int main()
{
	vector<Shape *> shapesArray;

	// Lets populate it with data :)

	for (int i = 0; i < 5; i++)
	{
		// random number between 1 and 10
		int randomHeight = 1 + rand() % 10;
		int randomWidth = 1 + rand() % 10;
		Rectangle *rectangle = new Rectangle(randomHeight, randomWidth);

		// rectangle pointer is being added in Shape pointer array? wow 
		shapesArray.push_back(rectangle);
	}

	for (int i = 0; i < 5; i++)
	{
		// random number between 1 and 10
		int randomRadius = 1 + rand() % 10;
		Circle *circle = new Circle(randomRadius);

		// circle pointer is being added in Shape pointer array? wow 
		shapesArray.push_back(circle);
	}

	for (int i = 0; i < 5; i++)
	{
		// random number between 1 and 10
		int randomBase = 1 + rand() % 10;
		int randomHeight = 1 + rand() % 10;
		Triangle *triangle = new Triangle(randomBase, randomHeight);

		// triangle pointer is being added in Shape pointer array? wow 
		shapesArray.push_back(triangle);
	}

	// we ran 3 loos 5 times means vector should contains 15 different objects. All casted to Shap pointer. (Power of polymorphism)
	// now lets run Print function on populated array

	Print(shapesArray);

	// and magic happened. 

}
