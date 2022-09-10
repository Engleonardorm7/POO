#include <iostream>
#include "Person.h"
using namespace std;

class Footballer:public Person{
	private:
		int number;
		string position;
			
	public:
		Footballer(string name, string surname,int age,int number, string position):Person(name,surname,age){
			this->number=number;
			this->position=position;
		}	
		~Footballer(){
			
		}
		void Interview(){
			cout<<"The player is in an interview "<<endl;
		}
		void SoccerGame(){
			cout<<"The player will play "<<endl;
		}
		void Training(){
			cout<<"The player will train "<<endl;
		}
};
