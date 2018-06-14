/*
 * Alumno.h
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */


#ifndef ALUMNO_H_
#define ALUMNO_H_
#include <iostream>
using namespace std;

class Alumno {

private:
	string nombre;
	string apellido;
	long legajo;
public:
	Alumno();
	Alumno(string, string, long);
	string getApellido();
	void setApellido(string apellido);
	long getLegajo();
	void setLegajo(long legajo);
	string getNombre();
	void setNombre(string nombre);
	string toString();
};

#endif /* ALUMNO_H_ */
