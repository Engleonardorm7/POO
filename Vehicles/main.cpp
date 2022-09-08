#include <iostream>
#include "Turism.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Turism *t1=new Turism("Toyota","Black","GH89",4);
	
	t1->setColor("White");
	cout<<"Color: "<<t1->getColor()<<endl;
	
	cout<<"Model: "<<t1->modelreturn()<<endl;
	
	return 0;
}
