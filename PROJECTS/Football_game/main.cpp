#include <iostream>
#include <stdlib.h>
#include "Person.h"
#include "Footballer.h"
#include "Trainer.h"
#include "Doctor.h"

using namespace std;
Person *team[4];

void trip(){
	for(int i=0;i<4;i++){
		cout<<team[i]->getName()<<" "<<team[i]->getSurname()<<" -> ";
		team[i]->trip();
	}
}
void training(){
	for(int i=0;i<4;i++){
		cout<<team[i]->getName()<<" "<<team[i]->getSurname()<<" -> ";
		team[i]->Training();
	}
}
void soccerGame(){
	for(int i=0;i<4;i++){
		cout<<team[i]->getName()<<" "<<team[i]->getSurname()<<" -> ";
		team[i]->SoccerGame();
	}
}
void planning(){
	
		cout<<team[2]->getName()<<" "<<team[2]->getSurname()<<" -> ";
		((Trainer *)team[2])->PlanTraining();//downcasting to enter again to the trainer class
	
}

void interview(){
	
		cout<<team[0]->getName()<<" "<<team[0]->getSurname()<<" -> ";
		((Footballer *)team[0])->Interview();//downcasting to enter again to the Trainer class
		cout<<team[1]->getName()<<" "<<team[1]->getSurname()<<" -> ";
		((Footballer *)team[1])->Interview();//downcasting to enter again to the Footballer class
	
}

void heal(){
	
		cout<<team[3]->getName()<<" "<<team[3]->getSurname()<<" -> ";
		((Doctor *)team[3])->HealInjury();//downcasting to enter again to the Doctor class
	
}

void menu(){
int option=0;
 while(option!=7){
 	
 	system("cls");
 	cout<<"\t. :MENU: ."<<endl;
 	cout<<"1. Team trip"<<endl;
 	cout<<"2. Training"<<endl;
 	cout<<"3. Soccer game"<<endl;
 	cout<<"4. Plan training"<<endl;
 	cout<<"5. Interview"<<endl;
 	cout<<"6. Heal injury"<<endl;
 	cout<<"7. Exit"<<endl;
 	cin>>option;
 	
 	switch(option){
 		case 1:
 			trip();
 			break;
 		case 2:
 			training();
 			break;
 		case 3:
 			soccerGame();
 			break;
 		case 4:
 			planning();
 			break;
 		case 5:
 			interview();
 			break;
 		case 6:
 			heal();
 			break;
 			
 		case 7: break;
 		
 		default:
 			cout<<"type a correct option"<<endl;
 			break;
	 }
 	system("pause");
 	
 	
 }	
	
	
	
}
int main(int argc, char** argv) {
	
	
	
	team[0]=new Footballer("Gonzalo","Higuain",33,9,"front player");
	team[1]=new Footballer("Paulo","Dybala",27,10,"front player");
	team[2]=new Trainer("Massimiliano","Allegri",53,"defensive ");
	team[3]=new Doctor("Alex","Marroni",62,"physiotherapist",23);
	
	
	menu();
	
	
	return 0;
}
