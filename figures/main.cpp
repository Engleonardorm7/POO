#include <iostream>
#include "Triangle.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Triangle *t1=new Triangle(3,5,6,7);
	
	cout<<"Numero de lados: "<<t1->getNLados()<<endl;
	cout<<"Area: "<<t1->areaTriangle()<<endl;
	
	return 0;
}
