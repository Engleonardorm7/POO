#include <iostream>
#include "Plant.h"
#include "Carnivorous.h"
#include "Herbivorous.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Plant *plant1=new Plant();
	
	plant1->feed();
	
	Carnivorous *animal1=new Carnivorous();
	
	animal1->feed();
	
	Herbivorous *animal2=new Herbivorous();
	
	animal2->feed();
	
	return 0;
}
