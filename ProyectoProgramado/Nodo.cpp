#include "Nodo.h"




Nodo::Nodo()
{
	municipio = NULL;
	next = NULL;
}

Nodo::Nodo(Municipio data):municipio(data), next(NULL)
{
}

void Nodo::borrar_todo()
{
	if (next)
		next->borrar_todo();
	delete this;
}

void Nodo::print()
{
	wcout << municipio << endl;
}

Nodo::~Nodo()
{
}
