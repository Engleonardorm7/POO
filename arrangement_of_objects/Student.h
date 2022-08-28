//Arrangement of objects

class Student{
	//Atributos
	private:
		float maths,robotics,average;
		
		//methods
		
	public:
		Student(float _maths, float _robotics){
			maths=_maths;
			
		}
		
		Student(){ //Default constructor
			
		}
	
		void askdata();
		void showdata(); 
	
};
