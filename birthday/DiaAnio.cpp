#include<iostream>
#include "DiaAnio.h"

using namespace std;

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
	cout<<"Month: "<<mes<<"/nDay: "<<dia<<endl;

}

