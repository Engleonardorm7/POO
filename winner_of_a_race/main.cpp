#include <iostream>
#include "Athlete.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Athlete::getTime(){
	return time;
}
void Athlete::showWinner(){
	
	cout<<"Name: "<<name<<endl;
	cout<<"Number: "<<number<<endl;
	cout<<"Time: "<<time<<endl;
}

int Athlete::indexwinner(Athlete athlete[], int n){
	int index;
	float time=athlete[0].getTime();
	for(int i=0;i<n;i++){
		if(athlete[i].getTime()<time){
		
		time=athlete[i].getTime();
		index=i;
	}
		
	}
	return index;
}








int main(int argc, char** argv) {
	
	int participants;
	int number;
	string name;
	float time; 
	int winner;
	
	
	Athlete *athlete;
	cout<<"Type the number of Athletes: "<<endl;
	cin>>participants;
	
	athlete = new Athlete[participants];
	
	for(int i;i<participants;i++){
		cin.ignore();
		cout<<"Type the data for the Athlete "<<(i+1)<<": "<<endl;
		
		cout<<"Name: ";
		getline(cin,name);
		cout<<"Athlete number: ";
		cin>>number;
		cout<<"time: ";
		cin>>time;
		
		athlete[i] = Athlete(number,name,time); 
		
		system("cls");
		
	}
		winner = Athlete::indexwinner(athlete, participants);
		cout<<"\n The Winner is: "<<endl;
		(athlete+winner)->showWinner();
		
	
	
	
	return 0;
}
