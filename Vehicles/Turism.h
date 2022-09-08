//Herencia publica
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Turism: public Vehicle{
	private:
		int numberdoors;
		
	public:
		Turism(string brand, string color, string model,int numberdoors):Vehicle(brand,color,model){
			this->numberdoors=numberdoors;
		}
		~Turism(){
			
		}
		
		int getNumberdoors(){
			return numberdoors;
		}
		string modelreturn(){
			string mensaje=getModel();
			return mensaje;
		}
};
