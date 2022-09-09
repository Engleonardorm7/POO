#include <iostream>
#include "BaseClass.h"
using namespace std;

class DerivedClass: public BaseClass{
	private:
		int number2;
	
	public:
		DerivedClass(int number,int number2):BaseClass(number){
			this->number2=number2;
			cout<<"constructor of the Derived Class "<<endl;
		}
		~DerivedClass(){
			cout<<"Destructor of the Derived Class "<<endl;
		}
};

