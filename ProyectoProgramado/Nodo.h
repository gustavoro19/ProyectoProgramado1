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
	
	int data;
	Nodo *next;
	Nodo(int);
	void borrar_todo();
	~Nodo();
};

#endif
