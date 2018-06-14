/*
 * AlumnoService.h
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#ifndef ALUMNOSERVICE_H_
#define ALUMNOSERVICE_H_

#include <fstream>
#include "Alumno.h"

using namespace std;

class AlumnoService {
public:
	void write(ofstream*, Alumno*);
};

#endif /* ALUMNOSERVICE_H_ */
