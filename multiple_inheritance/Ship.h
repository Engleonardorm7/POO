#include <iostream>
using namespace std;

class Ship{
	private:
		string name;
		
	public:
		Ship(string name){
			this->name=name;
		}
		~Ship(){
		}
		
		void pointShip(){
			cout<<"movement in the water"<<endl;
		}
		string getName(){
			return name;
		}
};
