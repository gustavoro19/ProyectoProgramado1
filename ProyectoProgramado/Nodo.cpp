#include "Nodo.h"


Nodo::Nodo(int val):data(val), next(NULL)
{
}

void Nodo::borrar_todo()
{
	if (next)
		next->borrar_todo();
	delete this;
}


Nodo::~Nodo()
{
}
