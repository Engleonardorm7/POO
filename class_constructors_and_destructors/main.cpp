//class constructors and destructors

#include <iostream>
#include "DerivedClass.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	DerivedClass *ob1=new DerivedClass(5,10);
	
	cout<<endl;
	
	delete ob1;
	
	return 0;
}
