#include <iostream>
#include "Ship.h"
#include "Plane.h"
using namespace std;

class HydroPlane:public Ship, public Plane{
	private:
		string code;
		
	public:
		HydroPlane(string name,string model,string code):Ship(name),Plane(model){
			this->code=code;	
		}
		~HydroPlane(){
			
		}
		
		string getCode(){
			return code;
		}
		void showData(){
			cout<<"Nombre: "<<getName()<<endl;
			cout<<"Model: "<<getModel()<<endl;
			cout<<"Code: "<<code<<endl;
		}
};
