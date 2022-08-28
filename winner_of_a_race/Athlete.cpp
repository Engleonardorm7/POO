#include <iostream>
#include "Athlete.h"

using namespace std;

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

