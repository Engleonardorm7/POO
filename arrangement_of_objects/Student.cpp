#include<iostream>
#include<Student.h>

usign namespace std;

void Student::askdata(){
	cout<<"Type your Math´s grades: "<<endl;
	cin>>maths;
	
	cout<<"Type your Robotics´ grades: "<<endl;
	cin>>robotics;
}

void Student::showdata(){
	cout<<"Maths grades: "<<maths<<endl;
	cout<<"Robotics grades: "<<robotics<<endl;
	cout<<"Robotics grades: "<<robotics<<endl;
	cout<<"Average: "<<(maths+robotics)/2<<endl;
}
