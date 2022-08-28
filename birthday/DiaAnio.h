//implementation class DiaAnio

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
