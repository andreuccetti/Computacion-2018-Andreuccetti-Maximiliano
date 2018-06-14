/*
 * Carrera.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "Carrera.h"

Carrera::Carrera() {
	materias = new Link();
}

Link* Carrera::getMaterias() {
	return materias;
}

void Carrera::setMaterias(Link* materias) {
	this->materias = materias;
}
