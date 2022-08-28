#include <iostream>
#include "Estudiante.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Estudiante* estudiante1= new Estudiante("12343",3.5,34,"calle 56-34");
	
	estudiante1->mostrarDatos();
	
	
	
	return 0;
}
