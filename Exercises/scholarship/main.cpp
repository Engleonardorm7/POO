#include <iostream>
#include "Student.h"
#include "Athlete.h"
#include "ScholarSport.h"

using namespace std;

int main(int argc, char** argv) {
	
	Student *studentJuan=new Student("Engineering");
	Student *studentPedro=new Student("Archeology");
	Athlete *sportLuis=new Athlete("Andres");
	ScholarSport *bdAna=new ScholarSport("Archeologist","Mario",1200);
	ScholarSport *bdCarmen=new ScholarSport("Medicine","Diana",1300);
	
	cout<<"Showing Data: "<<endl;
	cout<<"Showing Data Student Juan: "<<endl;
	studentJuan->showData();
	cout<<"Showing Data Student Pedro: "<<endl;
	studentPedro->showData();
	cout<<"Showing Data Sport Luis: "<<endl;
	sportLuis->showData();	
		cout<<"Showing Data bdAna: "<<endl;
	bdAna->showData();
	cout<<"Showing Data bdCarmen: "<<endl;
	bdCarmen->showData();
	cout<<"Showing Data Student Juan: "<<endl;
	studentJuan->showData();
	
	string career;
	cout<<"\n Type the new career Student Juan: "<<endl;
	getline(cin,career);
	studentJuan->setnameCareer(career);
	cout<<"\n Type the new career of bdAna: "<<endl;
	getline(cin,career);
	bdAna->setnameCareer(career);
	cout<<"The new career of Juan is: "<<studentJuan->getnameCareer()<<endl;
	cout<<"The new career of Juan is: "<<bdAna->getnameCareer()<<endl;
	
	string newCoach;
	cout<<"\n Type the new Coach of Luis: "<<endl;
	getline(cin,newCoach);
	sportLuis->setnameCoach(newCoach);
	cout<<"\n Type the new Coach of Carmen: "<<endl;
	getline(cin,newCoach);
	bdCarmen->setnameCoach(newCoach);
	cout<<"\n The new coach of Luis is: "<<sportLuis->getnameCoach()<<endl;	
	cout<<"\n The new coach of Carmen is: "<<bdCarmen->getnameCoach()<<endl;	
	
	float increment;
	cout<<"\n Type the increment for bdAna: ";
	cin>>increment;
	bdAna->setamount_scholarship(increment);
	cout<<"\n Type the increment for bdCarmen: ";
	cin>>increment;
	bdCarmen->setamount_scholarship(increment);
	cout<<"\n The new amount for the bdAna's Scholarship is: "<<bdAna->getamount_scholarship();
	cout<<"\n The new amount for the bdCarmen's Scholarship is: "<<bdCarmen->getamount_scholarship();
	
	
	delete studentJuan;
	delete studentPedro;
	delete sportLuis;
	delete bdAna;
	delete bdCarmen;
	return 0;
}
