#ifndef ATHLETE_H
#define ATHLETE_H

#include <iostream>
using namespace std;

class Athlete{
	private:
		string nameCoach;
		
	public:
		Athlete(string nameCoach){
			this->nameCoach=nameCoach;
		}
		void showData(){
			cout<<"Name Coach: "<<nameCoach<<endl;
		}
		void setnameCoach(string newnameCoach){
			this->nameCoach=newnameCoach;
		}
		string getnameCoach(){
			return nameCoach;
		}
		~Athlete(){
			
		}
};
#endif
