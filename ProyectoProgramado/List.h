#ifndef PERSONA_H
#define PERSONA_H
#include <stdlib.h>
#include <sstream>
#include <iostream>
#include <string>
#include "Nodo.h"
#include "Municipio.h"
#include "Pais.h"

using namespace std; 

class List 
{
public:
	Nodo* head;
	List();
	void insertarInicio( int val);
	void insertaFinal(int val);
	void remover(int val);
	void print();
	~List();

};

#endif  