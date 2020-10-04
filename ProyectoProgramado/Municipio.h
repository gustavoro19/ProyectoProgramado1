#ifndef MUNICIPIO_H
#define MUNICIPIO_H
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <string>

using namespace std;

class Municipio {
public:
	string nombreMunicipio;
	long cantAncianosHombres;
	long cantAncianosMujeres;
	long cantHombres;
	long cantMujeres;
	long cantNinios;
	long cantNinias;
	long prima[1];
	long totalHabitantesMunicipio[1];
	long cantidadMunicipios;
	
	
	void solicitarInfo(int numeroMunicipios);
	long ObtenerPrima(int numeroMunicipios);
	long totalHabitantes(int numeroMunicipios);
	Municipio();
	~Municipio();
};

#endif
