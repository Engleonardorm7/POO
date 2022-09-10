#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student{
		private:
			string career;
			
		public:
			Student(string career){
				this->career=career;
			}
			void showData(){
				cout<<"Name Career: "<<career<<endl;
			}
			void setnameCareer(string newCareer){
				this->career=newCareer;
			}
			string getnameCareer(){
				return career;
			}
			~Student(){
			
		}
};
#endif
