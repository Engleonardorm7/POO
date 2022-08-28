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


int main(int argc, char** argv) {
	quadrilateral *c1;
	float side1,side2;
	cout<<"type side 1: "<<endl;
	cin>>side1;
	cout<<"type side 2: "<<endl;
	cin>>side2;
	if(side1==side2){//Square
		c1=new quadrilateral(side1);
	}else{
		c1=new quadrilateral(side1,side2);
	}
	cout<<"The perimeter is: "<<c1->getPerimeter()<<endl;
	cout<<"The area is: "<<c1->getArea()<<endl;
	return 0;
}
