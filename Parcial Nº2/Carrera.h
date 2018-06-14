/*
 * Carrera.h
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#ifndef CARRERA_H_
#define CARRERA_H_
#include "Link.h"

class Carrera {
public:
public:
	Carrera();
	Link* getMaterias();
	void setMaterias(Link*);

private:
	Link* materias;
};

#endif /* CARRERA_H_ */
