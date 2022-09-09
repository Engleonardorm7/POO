#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;

int main(int argc, char** argv) {
	Polygon *polygons[2];
	
	polygons[0]=new Rectangle(7,4);
	polygons[1]=new Triangle(3,4,4);
	
	for(int i=0;i<2;i++){
		cout<<"Area: "<<polygons[i]->area()<<endl;
		cout<<"Perimeter: "<<polygons[i]->perimeter()<<endl;
	}
	
	return 0;
}
