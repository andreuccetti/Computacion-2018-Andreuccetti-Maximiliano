/*
 * QueueNode.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "QueueNode.h"

#include <iostream>

using namespace std;

QueueNode* QueueNode::getNext() {
	return next;
}

void QueueNode::setNext(QueueNode* next) {
	this->next = next;
}

Alumno* QueueNode::getValue() {
	return value;
}

void QueueNode::setValue(Alumno* value) {
	this->value = value;
}

QueueNode::QueueNode() {
	// TODO Auto-generated constructor stub
	value = NULL;
	stack = NULL;
	next = NULL;
}

Stack* QueueNode::getStack() {
	return stack;
}

void QueueNode::setStack(Stack* stack) {
	this->stack = stack;
}
