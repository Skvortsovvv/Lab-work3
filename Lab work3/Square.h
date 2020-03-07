#pragma once
#include<iostream>
using namespace std;
class Square {
protected:
	double lenght, width;
public:
	Square(double lenght, double width);
	virtual double Squared();
	virtual void print();
};