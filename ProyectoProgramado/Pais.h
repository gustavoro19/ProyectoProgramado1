#ifndef PAIS_H
#define PAIS_H
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <string>
#include "Nodo.h"
#include "Municipio.h"

class Pais
{
public:
	Pais();
	long totalHabitantesPais();
	double sumarPrimas();
	Municipio municipioMayor();
	Municipio municipioMenor();
	~Pais();

private:

};

#endif
