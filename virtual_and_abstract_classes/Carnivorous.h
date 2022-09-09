#include <iostream>
#include "Animal.h"
using namespace std;

class Carnivorous: public Animal{
	public:
		void feed(){
			cout<<"the carnivorous animal feeds on meat"<<endl;
		}
};

