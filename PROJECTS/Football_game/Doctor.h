#include <iostream>
#include "Person.h"
using namespace std;

class Doctor:public Person{
	private:
		string degree;
		int experience;
		
	public:
		Doctor(string name, string surname,int age, string degree,int experience):Person(name,surname,age){
			this->degree=degree;
			this->experience=experience;
		}
		~Doctor(){
			
		}
		void HealInjury(){
			cout<<"Healing "<<endl;
		}
		void SoccerGame(){
			cout<<"help the players "<<endl;
		}
		void Training(){
			cout<<"help the players in the training "<<endl;
		}
};

