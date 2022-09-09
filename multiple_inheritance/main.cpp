#include <iostream>
#include "HydroPlane.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	HydroPlane *ob1=new HydroPlane("Speed12","HA99","123p");
	ob1->showData();
	cout<<endl;
	ob1->pointShip();
	ob1->pointPlane();
	delete ob1;
	return 0;
}
