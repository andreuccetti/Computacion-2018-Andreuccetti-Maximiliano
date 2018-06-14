/*
 * ExamenService.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "ExamenService.h"
#include <iostream>

using namespace std;

void ExamenService::write(ofstream* file, Examen* examen) {
	*file << "#examen" << " " << examen->getMateria() << " " << examen->getFecha() << " " << examen->getNota() << " " << examen->getLibro() << " " << examen->getFolio() << endl;
}
