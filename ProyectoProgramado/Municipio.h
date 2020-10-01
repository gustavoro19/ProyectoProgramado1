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
	Municipio();
	double ObtenerPrima();
	long totalHabitantes();
	

	
};

#endif
