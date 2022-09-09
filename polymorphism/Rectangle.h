#include <iostream>
#include "Polygon.h"
using namespace std;

class Rectangle:public Polygon{
	private:
		float base, height;
		public:
			Rectangle(float base, float height){
				this->base=base;
				this->height=height;
			}
			
			float perimeter(){
				float per=2*base+2*height;
				return per;
			}
			float area(){
				float areaR=base*height;
				return areaR;
			}
};
