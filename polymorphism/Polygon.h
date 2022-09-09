#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
using namespace std;

class Polygon{
	public:
		virtual float perimeter()=0;
		virtual float area()=0;
};

#endif
