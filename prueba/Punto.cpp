/*
 * Punto.cpp
 *
 *  Created on: 27 de mar. de 2016
 *      Author: ernesto
 */

#include "Punto.h"

namespace std {

Punto::Punto() {
	this->p[0] = 0;
	this->p[1] = 0;
	// TODO Apéndice de constructor generado automáticamente

}

Punto::~Punto() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}

void Punto::setp(int x, int y){
	this->p[0] = x;
	this->p[1] = y;

}
int Punto::getx(){
	return p[0];
}
int Punto::gety(){
	return p[1];
}


} /* namespace std */

