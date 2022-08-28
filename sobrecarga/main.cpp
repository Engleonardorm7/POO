#include <iostream>
#include "persona.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	persona* persona1 = new persona("Leo",21);
	persona1->correr();
	
	persona* persona2 = new persona("1234");
	persona2->correr(4);
	
	return 0;
}
