#include<iostream>
using namespace std;

class persona{
	//Atributos
	private:	
		string nombre;
		int edad;
		string dni;
		
		//Metodos
		public:
			persona(string nombre, int edad){//metodo constructor
				this->nombre= nombre;
				this->edad = edad;
			
				
			}
			persona(string dni){ //constructor 2
				this->dni=dni;
			}
			
			void correr(){
				cout<<"soy "<<nombre<<" tengo "<<edad<<" años y estoy corriendo una maraton"<<endl;
			}
			
			void correr(int km){
				cout<<"He corrido "<<km<<" kilometros"<<endl;
			}
};
