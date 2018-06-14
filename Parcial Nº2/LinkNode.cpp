/*
 * LinkNode.cpp
 *
 *  Created on: 14 jun. 2018
 *      Author: usuario
 */

#include "LinkNode.h"
#include <iostream>

using namespace std;

LinkNode* LinkNode::getNext() {
	return next;
}

void LinkNode::setNext(LinkNode* next) {
	this->next = next;
}

Materia* LinkNode::getValue() {
	return value;
}

void LinkNode::setValue(Materia* value) {
	this->value = value;
}

LinkNode::LinkNode() {
	// TODO Auto-generated constructor stub
	value = NULL;
	next = NULL;
	queue = NULL;
}

Queue* LinkNode::getQueue(){
	return queue;
}

void LinkNode::setQueue(Queue* queue) {
	this->queue = queue;
}
