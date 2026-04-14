#include <iostream>
#include "Vector3.h"

using namespace std;

Vector3 vectorInput();

void main()
{
	cout << "First Vector \n \n";

	Vector3 vector1(vectorInput());

	cout << "Second Vector\n \n";

	Vector3 vector2(vectorInput());
}

Vector3 vectorInput()
{
	float x = 0;
	float y = 0;
	float z = 0;

	cout << "Enter the x value of your vector \n\n x:";

	cin >> x;

	cout << "Enter the y value of your vector \n\n y:";

	cin >> y;

	cout << "Enter the z value of your vector \n\n z:";

	cin >> z;

	return (Vector3(x, y, z));
}