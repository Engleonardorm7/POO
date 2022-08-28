//Arrangement of objects

#include <iostream>

using namespace std;

class Student{
	//Atributos
	private:
		float maths,robotics,average;
		
		//methods
		
	public:
		Student(float _maths, float _robotics){
			maths=_maths;
			robotics=_robotics;
			
		}
		
		Student(){ //Default constructor
			
		}
	
		void askdata();
		void showdata(); 
	
};
void Student::askdata(){

	cout<<"Type your Math´s grades: "<<endl;
	cin>>maths;
	
	cout<<"Type your Robotics´ grades: "<<endl;
	cin>>robotics;
}

void Student::showdata(){
	cout<<"Maths grades: "<<maths<<endl;
	cout<<"Robotics grades: "<<robotics<<endl;
	cout<<"Average: "<<(maths+robotics)/2<<endl;
}



int main(){
	
	Student student[4]; //creating an arragement of static objects
	Student* student2 = new Student[3]; //creating an arragement of Dynamic obje
	
	for(int i=0;i<3;i++){
		(student2+i) -> askdata();
		cout<<endl;
	}
	
	cout<<"Showing the grades: "<<endl;
	
	for(int i=0;i<3;i++){
		(student2+i) -> showdata();
		cout<<endl;
		
		}
	
	return 0;
}
