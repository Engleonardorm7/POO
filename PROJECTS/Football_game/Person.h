#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person{
	
	protected:
		string name;
		string surname;
		int age;	
		
	public:
		Person(string name, string surname,int age){
			this->name=name;
			this->surname=surname;
			this->age=age;
		}
		~Person(){
			
		}
		string getName(){
			return name;
		}
		string getSurname(){
			return surname;
		}
		int getAge(){
			return age;
		}
		
		void trip(){
			cout<<"Travelling"<<endl;
		}
		virtual void SoccerGame()=0;
		virtual void Training()=0;
		
};

#endif
