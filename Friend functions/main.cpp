#include <iostream>
#include "Character.h"
using namespace std;

//Function to Modify the values of attack and defense

void Modify(Character &p,int at,int def){
	p.attack=at;
	p.defense=def;
	
}
int main(int argc, char** argv) {
	
	Character *main=new Character(100,90);
	
	main->showData();
	
	Modify(*main,60,50);
	main->showData();
	
	return 0;
}
