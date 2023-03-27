// cicleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

const double PI = 3.14;
const double Radius = 5.4;

int main()
{
	float area;								//Definition of the area of a circle.

	float circumference;					//Definition of circumference.

	circumference = 2 * PI * Radius;		//Computation of curcumference.

	area = PI*pow(Radius,2);				//Computation of area.

	cout << "The are of a circle with a radius of ";
	cout << Radius;
	cout << " is ";
	cout << area << endl;

	//Fill in the code for the cout statement that will output (with description)
	//the area of the circle.

	return 0;
}
