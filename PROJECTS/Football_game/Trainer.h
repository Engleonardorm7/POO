#include <iostream>
#include "Person.h"
using namespace std;

class Trainer:public Person{
	
	private:
		string strategy;
		
	public:
		Trainer(string name, string surname,int age, string strategy):Person(name,surname,age){
			this->strategy=strategy;
		}
		~Trainer(){
			
		}
		void PlanTraining(){
			cout<<"Planning: "<<endl;
		}
		void SoccerGame(){
			cout<<"Supervise "<<endl;
		}
		void Training(){
			cout<<"Train the players "<<endl;
		}
};
