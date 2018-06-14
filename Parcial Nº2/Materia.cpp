/*
 * Materia.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "Materia.h"
#include <iostream>
using namespace std;
#include <sstream>

 string Materia::getCarrera()  {
	return carrera;
}

void Materia::setCarrera(string carrera) {
	this->carrera = carrera;
}

string Materia::getCurso() {
	return curso;
}

void Materia::setCurso(string curso) {
	this->curso = curso;
}

string Materia::getNombre() {
	return nombre;
}

void Materia::setNombre(string nombre) {
	this->nombre = nombre;
}

string Materia::getProfesor(){
	return profesor;
}

void Materia::setProfesor(string profesor) {
	this->profesor = profesor;
}

Materia::Materia() {
	// TODO Auto-generated constructor stub
	nombre = "";
	carrera = "";
	curso = "";
	profesor = "";

}

Materia::Materia(string nombre, string carrera, string curso, string profesor) {
	// TODO Auto-generated destructor stub
	this->nombre = nombre;
	this->carrera = carrera;
	this->curso = curso;
	this->profesor = profesor;
}

string Materia::toString() {
	stringstream ss;

		ss << "Nombre: " << nombre << " - Carrera: " << carrera << " - Curso: " << curso << " - Profesor: " << profesor;

		return ss.str();
}

bool Materia::operator >(Materia p) {
	return this->nombre > p.nombre;
}

bool Materia::operator <=(Materia p) {
	return this->nombre <= p.nombre;
}

bool Materia::operator ==(Materia p) {
	return this->nombre == p.nombre;
}

bool Materia::operator !=(Materia p) {
	return this->nombre != p.nombre;
}
