#include <iostream>
#include "math.h"
#include "Figures.h"
using namespace std;

class Triangle : public Figures{
	private:
		float side1,side2,side3;
		
	public:
		Triangle(int nLados, float side1, float side2, float side3):Figures(nLados){
		this->side1=side1;
		this->side2=side2;
		this->side3=side3;	
		}
		
		float areaTriangle(){
			float p=(side1+side2+side3)/2;
			float area= sqrt(p*(p-side1)*(p-side2)*(p-side3));
			return area;
		}
};
