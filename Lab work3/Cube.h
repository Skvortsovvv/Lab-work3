#pragma once
#include<iostream>
#include "Square.h"
using namespace std;
class Cube : public Square {
	double height;
public:
	Cube(double lenght, double width, double height);
	void print();
	double Squared();
};