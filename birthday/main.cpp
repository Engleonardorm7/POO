#include <iostream>
#include <stdlib.h>
//#include "DiaAnio.h"
using namespace std;

class DiaAnio{
    //Atributos
    private:
        int dia;
        int mes;

	//Metods
	public:
    	DiaAnio(int _dia, int _mes){
       	 	dia=_dia;
       	  	mes=_mes;
    }
    bool igual(DiaAnio &d);
    void visualizar();
};
//proving if the dates are iqual
bool DiaAnio::igual(DiaAnio &d){
    if(dia==d.dia && mes==d.mes){
            return true;
    }else{
        return false;
    }

}

void DiaAnio::visualizar(){
	cout<<"Showing data: "<<endl;
	cout<<"Month: "<<mes<<"\n Day: "<<dia<<endl;

}



int main(int argc, char** argv) {
	
    DiaAnio *today;
    DiaAnio *birthday;
    
    int d,m;
    
    cout<<" Enter today's date "<<endl;
    cout<<" Day: "<<endl;
    cin>>d;
    cout<<" Month: "<<endl;
    cin>>m;
    today = new DiaAnio(d,m);

    cout<<" Enter your birthday day: "<<endl;
    cin>>d;   
    cout<<" Enter your birthday month: "<<endl;
    cin>>m;
    birthday = new DiaAnio(d,m);
	
//--------------- falla
    today->visualizar();
    cout<<endl;
    birthday->visualizar();
    cout<<endl;

    if(today -> igual(*birthday)){
        cout<<"HAPPY BIRTHDAY!!!"<<endl;
    }else{
    cout<<"HAVE A NICE DAY"<<endl;

    }
	
	system("pause");
	return 0;

}
