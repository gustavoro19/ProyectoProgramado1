#include "List.h"


List::List():head(NULL){
}

void List::insertarInicio(int val)
{
	Nodo *node = new Nodo(val);
	node->next = this->head;
	this->head = node;
}

void List::insertaFinal(int val)
{
	if (head == NULL) {
		insertarInicio(val);
		return;
	}
	Nodo *node = new Nodo(val);
	Nodo *ptr = this->head;
	while (ptr->next != NULL) {
		ptr = ptr->next; 
	}
}

void List::remover(int val)
{
}

void List::print()
{
	Nodo *node = this->head;
	while (node != NULL)
	{
		cout << node->data <<endl;
		node = node->next;
	}
	cout << endl;
	
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
