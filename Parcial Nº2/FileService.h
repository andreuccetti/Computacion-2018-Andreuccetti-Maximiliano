/*
 * FileService.h
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#ifndef FILESERVICE_H_
#define FILESERVICE_H_

#include <iostream>
#include "Carrera.h"

using namespace std;

class FileService {
public:
	FileService();
	string getFilename();
	void setFilename(string filename);
	void generate();
	void read(Carrera*);
private:
	string filename;
};

#endif /* FILESERVICE_H_ */
