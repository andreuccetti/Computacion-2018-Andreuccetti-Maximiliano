/*
 * FileService.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "FileService.h"
#include "AlumnoService.h"
#include "ExamenService.h"
#include <fstream>

#include "MateriaService.h"
using namespace std;

string FileService::getFilename(){
	return filename;
}

FileService::FileService() {
	filename = "alumnos.txt";
}

void FileService::setFilename(const string filename) {
	this->filename = filename;
}

void FileService::generate() {
	ofstream file;

	file.open(filename, ios::out);
	if (file.is_open()) {
		(new MateriaService())->write(&file, new Materia("Calculo", "Ingenieria", "A" , "Ramirez"));
		(new AlumnoService())->write(&file, new Alumno("Jose", "Perez", 10));
		(new ExamenService())->write(&file,	new Examen("Computacion", "18/05/2018", 10, 1, 35));


	}
	file.close();
}

void FileService::read(Carrera* carrera1) {
	ifstream file;

	file.open(filename, ios::in);
	if (file.is_open()) {
		string selector;
		file >> selector;
		while (file.eof() == false) {
			if (selector == "#materia") {
							string nombre;
							string carrera;
							string curso;
							string profesor;
							file >> nombre >> carrera >> curso >> profesor;
							carrera1->getMaterias()->add(new Materia(nombre, carrera, curso , profesor));
						}
			if (selector == "#alumno") {
				string nombre;
				string apellido;
				int legajo;
				file >> nombre >> apellido >> legajo;
				carrera1->getMaterias()->getStart()->getQueue()->store(new Alumno(nombre, apellido, legajo));
			}
			if (selector == "#examen") {
				string materia;
				string fecha;
				int nota;
				int libro;
				int folio;
				file >> materia >> fecha >> nota >> libro >> folio;
				carrera1->getMaterias()->getStart()->getQueue()->getEnd()->getStack()->push(new Examen(materia, fecha, nota, libro, folio));
			}
			file >> selector;
		}
	}
	file.close();
}
