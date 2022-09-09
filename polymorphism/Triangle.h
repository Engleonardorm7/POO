#include <iostream>
#include "Polygon.h"
#include <math.h>
using namespace std;

class Triangle:public Polygon{
	private:
	float side1,side2,side3;
	
	public:
	Triangle(float side1,float side2, float side3){
		this->side1=side1;
		this->side2=side2;
		this->side3=side3;
	}
	
	float perimeter(){
		float per=(side1+side2+side3);
			return per;
		}
	float area(){
		float s= (side1+side2+side3)/2;
		float areaT=sqrt(s*(s-side1)*(s-side2)*(s-side3));
		return areaT;
	}
	
};

