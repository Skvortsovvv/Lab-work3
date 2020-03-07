#include "Cube.h"
#include "Square.h"
#include<iostream>
using namespace std;
Cube::Cube(double lenght, double width, double height) :
	Square(lenght, width)
{
	this->height = height;
}
void Cube::print()
{
	cout << "Height: " << height << endl;
	Square::print();
	
}
double Cube::Squared() {
	return Square::Squared() * height;
}