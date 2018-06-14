/*
 * Link.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "Link.h"
#include <iostream>
using namespace std;

LinkNode* Link::getStart() {
	return start;
}

void Link::add(Materia* value) {
	LinkNode* newLinkNode = new LinkNode();
	newLinkNode->setValue(value);

	// Si la lista está vacía
	if (start == NULL) {
		start = newLinkNode;
		return;
	}

	// Si el elemento nuevo es menor al primero
	if (*(start->getValue()) > *value) {
		newLinkNode->setNext(start);
		start = newLinkNode;
		return;
	}

	// Busca posicion para el nuevo valor
	LinkNode *previous, *search;
	search = previous = start;
	while (search != NULL && *(search->getValue()) <= *value) {
		previous = search;
		search = search->getNext();
	}

	// Si el while sale por NULL
	if (search == NULL) {
		previous->setNext(newLinkNode);
		return;
	}

	// Si sale por mayor valor
	newLinkNode->setNext(previous->getNext());
	previous->setNext(newLinkNode);

}

bool Link::remove(Materia* value) {
	// Verifica si la lista está vacía
	if (start == NULL)
		return false;
	// Verifica si es el primero
	if (*(start->getValue()) == *value) {
		LinkNode* xx = start;
		start = start->getNext();
		delete xx;
		return true;
	}
	// Busca posicion para del valor a eliminar
	LinkNode *previous, *search;
	search = previous = start;
	while (search != NULL && *(search->getValue()) != *value) {
		previous = search;
		search = search->getNext();
	}

	// Si el while sale por NULL
	if (search == NULL) {
		return false;
	}
	// Si sale del while porque encontró el valor
	LinkNode* xx = search;
	previous->setNext(search->getNext());
	delete xx;

	return true;
}

void Link::show() {
	LinkNode* xx = start;

	while (xx != NULL) {
		cout << "Direccion: " << xx << " - Valor: " << xx->getValue()->toString() << " - Next: " << xx->getNext() << endl;
		xx = xx->getNext();
	}}

void Link::setStart(LinkNode* start) {
	this->start = start;
}

Link::Link() {
	// TODO Auto-generated constructor stub
	start = NULL;
}
