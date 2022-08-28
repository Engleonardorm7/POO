#include <iostream>
#include "Estatico.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Estatico *ob1=new Estatico();
	Estatico *ob2=new Estatico();
	Estatico *ob3=new Estatico();
	
	cout<<ob1->getContador()<<endl;
	
	cout<<"la suma: "<<Estatico::sumar(4,5);
	
	return 0;
}
