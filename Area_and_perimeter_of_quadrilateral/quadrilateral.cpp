#include <iostream>
#include "quadrilateral.h"
using namespace std;

float quadrilateral::getPerimeter(){
	float perimeter=(side1+side2)*2;
	return perimeter;
	}
	
float quadrilateral::getArea(){
	float area=(side1*side2);
	return area;
}
