#ifndef PAIS_H
#define PAIS_H
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <string>
#include "List.h"
#include "Municipio.h"

using namespace std;

class Pais
{
private:
	
	List Municipios;

public:
	long totalHabitantes();
	double sumarPrimas();
	Municipio municipioMayor();
	Municipio MunicipioMenor();
	Pais(List municipio);
	
};

#endif