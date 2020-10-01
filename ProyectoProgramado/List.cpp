#include "List.h"


List::List():head(NULL){
}

void List::insertarInicio(Municipio data)
{
	Nodo *node = new Nodo(data);
	node->next = this->head;
	this->head = node;
}

void List::insertaFinal(Municipio data)
{
	if (head == NULL) {
		insertarInicio(data);
		return;
	}
	Nodo *node = new Nodo(data);
	Nodo *ptr = this->head;
	while (ptr->next != NULL) {
		ptr = ptr->next; 
	}
}

void List::remover(Municipio data)
{
}

void List::print()
{
	Nodo *node = this->head;
	while (node != NULL)
	{
		cout << node << "->";
		node = node->next;
	}
	
}

List::~List()
{
	Nodo *node = this->head, * next = NULL;
	while (node!=NULL)
	{
		next = node->next;
		delete(node);
		node = next;
	}
}
