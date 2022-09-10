#include <iostream>
#include "DomesticCat.h"
#include "Feline.h"
using namespace std;

int main(int argc, char** argv) {
	
	DomesticCat *minino=new DomesticCat(2015,"Bogota","Persa","Camilo");
	Feline *starCircus=new Feline(2014,"India","Bengala","Gasca");
	
	cout<<"Diets: "<<endl;
	cout<<"Cat: "<<minino->printDiet()<<endl;
	cout<<"Feline: "<<starCircus->printDiet()<<endl;

	cout<<"\n Birth Year - Birth Place:"<<endl;
	cout<<"Cat: "<<minino->getBirthYear()<<"-"<<minino->getBirthPlace()<<endl;
	cout<<"Feline: "<<starCircus->getBirthYear()<<"-"<<starCircus->getBirthPlace()<<endl;
	
	cout<<"\n change name of the owner: "<<endl;
	string newOwner;
	cout<<"Type the name of the new Owner: ";
	getline(cin,newOwner);
	minino->setOwnerName(newOwner);
	cout<<"The new owner is: "<<minino->getOwnerName()<<endl;
	
	cout<<"\n Breed"<<endl;
	cout<<"Cat: "<<minino->getBreed()<<endl;
	cout<<"Feline: "<<starCircus->getBreed()<<endl;
	
	cout<<"\ Change the name of the circus: "<<endl;
	string newCircus;
	cout<<"Type the name of the new circus: "<<endl;
	getline(cin,newCircus);
	starCircus->setNameCircus(newCircus);
	cout<<"The new circus is: "<<starCircus->getNameCircus()<<endl;
	
	delete minino;
	delete starCircus;
	return 0;
}
