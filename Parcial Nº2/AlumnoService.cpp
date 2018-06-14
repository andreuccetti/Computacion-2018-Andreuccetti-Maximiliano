/*
 * AlumnoService.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "AlumnoService.h"

void AlumnoService::write(ofstream* file, Alumno* alumno) {
	*file << "#alumno" << " " << alumno->getNombre() << " " << alumno->getApellido() << " " << alumno->getLegajo() << endl;
}
