#include "VectorClass.h"
#include <string>

VectorClass::VectorClass()
{
	X = Y = 0;
}

VectorClass::VectorClass(float x, float y)
{
	X = x;
	Y = y;
}

void VectorClass::Print() const
{
	cout << "(" + to_string(X) + " , " + to_string(Y) + ")" << endl;
}
