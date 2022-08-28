#include <iostream>
using namespace std;

class Athlete{
	private:
		string name;
		int number;
		float time;
		
	public:
		Athlete(int number, string name,float time){
			this->number=number;
			this->name=name;
			this->time=time;
		}
		Athlete(){
		}
		
		~Athlete(){
		}
		
		float getTime();
		void showWinner();
		static int indexwinner(Athlete athlete[],int n);
};
