#include <iostream>
using namespace std;

class quadrilateral{
	
	private:
		float side1, side2;
			
	public:
		quadrilateral(float side1, float side2){
			this->side1=side1;
			this->side2=side2;
			
		}
		quadrilateral(float side){
			this->side1=this->side2=side;
		}
		
		float getPerimeter();
		float getArea();

};
