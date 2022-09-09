#include <iostream>
#include "Turism.h"
#include "Sport.h"
#include "Furgoneta.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Turism *t1=new Turism("Toyota","Black","GH89",4);
	
	t1->setColor("White");
	cout<<"Color: "<<t1->getColor()<<endl;
	
	cout<<"Model: "<<t1->modelreturn()<<endl;
	
	Sport *d1 = new Sport("Audi","Yellow","KP98",10);
	cout<<"cylinder_capacity: "<<d1->getcylinder()<<endl;
	cout<<"Brand: "<<d1->reportBrand()<<endl;
	
	Furgoneta *f1=new Furgoneta("Kia","Green","AS12",1200);
	
	cout<<"The freight is: "<<f1->getCarga()<<endl;
	cout<<"Color: "<<f1->reportarcolor()<<endl;
	
	delete t1;
	delete d1;
	delete f1;
	return 0;
}
