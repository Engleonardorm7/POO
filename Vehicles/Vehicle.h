//Guardian de inclusion multiple
#ifndef VEHICULO_H
#define VEHICULO_H
//Para poder usar la clase en varias clases
#include <iostream>
using namespace std;

class Vehicle{
	private:
		string brand;
		string color;
		
	protected:
		string model;
		
		string getModel(){
			return model;
		}
		
	public:
		Vehicle(string brand, string color, string model){
			this->brand=brand;
			this->color=color;
			this->model=model;
		}
		
		void setColor(string color){
			this->color=color;
		}
		
		string getBrand(){
			return brand;
		}
		string getColor(){
			return color;
		}
};
#endif

