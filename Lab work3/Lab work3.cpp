#include <iostream>
#include "Square.h"
#include "Cube.h"
using namespace std;
int main() {
	Square s(5.78, 19.2);
	Cube c(11.3, 35.66, 72.4);
	Square* p;
	p = &s;
	cout << "Square: " << endl;
	p->print();
	cout << endl << "Cube: " << endl;
	p = &c;
	p->print();
	return 0;
}