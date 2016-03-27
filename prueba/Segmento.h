/*
 * Segmento.h
 *
 *  Created on: 27 de mar. de 2016
 *      Author: ernesto
 */

#ifndef SEGMENTO_H_
#define SEGMENTO_H_
#include "Punto.h"
namespace std {

class Segmento {
public:
	float largoSegmento(Punto a, Punto b);
	Segmento();
	virtual ~Segmento();
};

} /* namespace std */

#endif /* SEGMENTO_H_ */
