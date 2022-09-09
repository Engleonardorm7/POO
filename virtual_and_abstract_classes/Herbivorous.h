#include <iostream>
#include "Animal.h"
using namespace std;

class Herbivorous : public Animal{
	public:
		void feed(){
			cout<<"the herbivorous animal feeds on herbs"<<endl;
		}
};

