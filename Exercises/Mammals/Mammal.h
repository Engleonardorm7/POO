#ifndef MAMMAL_H
#define MAMMAL_H

#include <iostream>
using namespace std;

class Mammal{
	private:
		int  birthYear;
		string birthPlace,breed;
		
	public:
		Mammal(int birthYear, string birthPlace, string breed){
			this->birthYear=birthYear;
			this->birthPlace=birthPlace;
			this->breed=breed;
		}
		~Mammal(){
			
		}
		
		virtual string printDiet()=0;
		
		int getBirthYear(){
			return birthYear;
		}
		string getBirthPlace(){
			return birthPlace;
		}
		string getBreed(){
			return breed;
		}
		

	
};

#endif
