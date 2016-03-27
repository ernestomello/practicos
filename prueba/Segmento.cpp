/*
 * Segmento.cpp
 *
 *  Created on: 27 de mar. de 2016
 *      Author: ernesto
 */

#include "Segmento.h"
#include "Punto.h"
#include <cmath>

namespace std {

Segmento::Segmento() {
	// TODO Apéndice de constructor generado automáticamente

}

Segmento::~Segmento() {
	// TODO !CodeTemplates.destructorstub.tododesc!
}
float Segmento::largoSegmento(Punto a, Punto b){
float h,c1,c2;
c1 = a.getx()- b.getx();
c2 = a.gety()- b.gety();
return sqrt(c1*c1 + c2*c2);
}

} /* namespace std */
