#ifndef NODO_H
#define NODO_H
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <string>
#include "Municipio.h"

using namespace std;


class Nodo 
{
public:
	Nodo();
	Nodo( Municipio );
	Municipio *municipio;
	Nodo *next;
	void borrar_todo();
	void print();
	~Nodo();
};

#endif
