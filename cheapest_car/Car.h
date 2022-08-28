#include <iostream>

using namespace std;

class Car{
	private:
		string brand;
		string model;
		float price;
		
	public:
		Car(string brand,string model, float price){
			this->brand=brand;
			this->model=model;
			this->price=price;
		}
		
		Car(){
			
		}
		
		~Car(){
		}
		
		float getPrice();
		void showData();
		static int cheapestIndex(Car cars[],int n);

	
};
