/*
 * Materia.h
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#ifndef MATERIA_H_
#define MATERIA_H_
#include <iostream>
using namespace std;

class Materia {

private:
	string nombre;
	string carrera;
	string curso;
	string profesor;
public:
	Materia();
	Materia(string, string, string, string);
	string getCarrera();
	void setCarrera(string carrera);
	string getCurso();
	void setCurso(string curso);
	string getNombre();
	void setNombre(string nombre);
	string getProfesor();
	void setProfesor(string profesor);
	string toString();
	bool operator>(Materia);
	bool operator<=(Materia);
	bool operator==(Materia);
	bool operator!=(Materia);
};

#endif /* MATERIA_H_ */
