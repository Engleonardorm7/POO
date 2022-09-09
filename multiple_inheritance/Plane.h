#include <iostream>
using namespace std;

class Plane{
	private:
		string model;
		
	public:
		Plane(string model){
			this->model=model;
		}
		~Plane(){
			
		}
		void pointPlane(){
			cout<<"movement in the air"<<endl;
		}
		string getModel(){
			return model;
		}
};
