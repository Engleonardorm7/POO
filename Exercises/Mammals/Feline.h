#ifndef FELINE_H
#define FELINE_H
#include "Mammal.h"
#include <iostream>
using namespace std;

class Feline: public Mammal{
	private:
		string nameCircus;
		
	public:
		Feline(int birthYear, string birthPlace, string breed,string nameCircus):Mammal(birthYear,birthPlace,breed){
			this->nameCircus=nameCircus;
		}
		
		Feline(int birthYear, string birthPlace, string breed):Mammal(birthYear,birthPlace,breed){
		
		}
		
		string printDiet(){
			return "the diet of the feline is based on meat";
		}
		void setNameCircus(string newName){
			this->nameCircus=newName;
		}
		string getNameCircus(){
			return nameCircus;
		}
		~Feline(){
			
		}	
};
#endif
