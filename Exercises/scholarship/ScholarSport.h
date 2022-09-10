#include <iostream>
#include "Student.h"
#include "Athlete.h"
using namespace std;

class ScholarSport : public Student, public Athlete{
	
	private:
		float amount_scholarship;
		
	public:
		ScholarSport(string career,string nameCoach,float amount_scholarship):Student(career),Athlete(nameCoach){
			this->amount_scholarship=amount_scholarship;
		}
		void showData(){
			cout<<"Amount Scholarship: "<<amount_scholarship<<endl;
			Student::showData();
			Athlete::showData();
		}
		void setamount_scholarship(float n){
			float increment=amount_scholarship*n/100;
			this->amount_scholarship+=increment;
		}
		float getamount_scholarship(){
			return amount_scholarship;
		}
		~ScholarSport(){
			
		}
};


