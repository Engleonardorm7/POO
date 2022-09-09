#include <iostream>
using namespace std;

class BaseClass{
	private:
		int number;
	
	public:
	BaseClass(int number){
		this->number=number;
		cout<<"constructor of the class"<<endl;
		
	}
	~BaseClass(){
		cout<<"Destructor of the class"<<endl;
	}		
};
