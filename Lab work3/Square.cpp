#include "Square.h"
#include<iostream>
using namespace std;
Square::Square(double lenght, double width) {
	this->lenght = lenght;
	this->width = width;
}

double Square::Squared() {
	return lenght * width;
}
void Square::print() {
	cout << "Lenght: " << lenght << endl << "Widht: " << width << endl;
	if (Squared() == lenght * width) {
		cout << "Area: " << Squared() << endl;
	}
	else {
		cout << "Volume: " << Squared() << endl;
	}
}