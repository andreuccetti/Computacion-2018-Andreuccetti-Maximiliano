/*
 * Alumno.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "Alumno.h"
#include <iostream>
#include <sstream>
using namespace std;

string Alumno::getApellido(){
	return apellido;
}

void Alumno::setApellido(string apellido) {
	this->apellido = apellido;
}

long Alumno::getLegajo(){
	return legajo;
}

void Alumno::setLegajo(long legajo) {
	this->legajo = legajo;
}

string Alumno::getNombre(){
	return nombre;
}

void Alumno::setNombre(string nombre) {
	this->nombre = nombre;
}

Alumno::Alumno() {
	// TODO Auto-generated constructor stub
	legajo = 0;
	nombre = "";
	apellido = "";

}

Alumno::Alumno(string nombre, string apellido, long legajo) {
	// TODO Auto-generated destructor stub
	this->nombre = nombre;
	this->apellido = apellido;
	this->legajo = legajo;
}
string Alumno::toString() {
	stringstream ss;

	ss << "Nombre: " << nombre << " - Apellido: " << apellido << " - Legajo: " << legajo;

	return ss.str();
}
