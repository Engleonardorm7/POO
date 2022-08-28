#include <iostream>
using namespace std;

class Character{
	friend void Modify(Character &,int,int); //Friend function
	
	private:
		int attack;
		int defense;
		
	public:
		Character(int attack, int defense){
			this->attack=attack;
			this->defense=defense;
		}
		void showData(){
			cout<<"Attack = "<<attack<<endl;
			cout<<"Defense = "<<defense<<endl;
		}
	
	
	
};
