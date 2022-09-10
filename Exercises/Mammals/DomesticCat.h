
#include "Feline.h"
#include <iostream>
using namespace std;

class DomesticCat: public Feline{
	private:
		string ownerName;
		
	public:
		DomesticCat(int birthYear, string birthPlace, string breed, string ownerName):Feline(birthYear,birthPlace,breed){
			this->ownerName=ownerName;
		}
		~DomesticCat(){
			
		}
		
		string printDiet(){
			return "the cat's diet is with Whiskas";
		}
		void setOwnerName(string newName){
			this->ownerName=newName;
		}
		string getOwnerName(){
			return ownerName;
		}
};
