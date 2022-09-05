#include <iostream>
using namespace std;

class Figures{
	private:
		int nLados;
		
	public: 
		Figures(int nLados){
			this->nLados=nLados;
		}
		int getNLados(){
			return nLados;
		}
};

