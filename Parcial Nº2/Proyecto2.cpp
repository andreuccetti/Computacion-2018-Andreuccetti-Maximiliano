//============================================================================
// Name        : Proyecto2.cpp
// Author      : Maxi Andreuccetti
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Carrera.h"
using namespace std;

#include "FileService.h"
#include "Queue.h"

int main() {
	(new FileService())->generate();
	Carrera* carrera1 = new Carrera();


	(new FileService())->read(carrera1);
	carrera1->getMaterias()->show();

	return 0;
}
