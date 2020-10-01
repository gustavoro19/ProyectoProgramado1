#ifndef PERSONA_H
#define PERSONA_H
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <string>
#include "Nodo.h"
#include "Municipio.h"

using namespace std; 

class List
{
public:
	Nodo *head;
	List();
	void insertarInicio(Municipio data);
	void insertaFinal(Municipio data);
	void remover(Municipio data);
	void print();
	~List();

};

#endif  