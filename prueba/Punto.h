/*
 * Punto.h
 *
 *  Created on: 27 de mar. de 2016
 *      Author: ernesto
 */

#ifndef PUNTO_H_
#define PUNTO_H_

namespace std {

class Punto {
private:
	int p[2];

public:
	int getx();
	int gety();
	void setp(int x, int y);
	Punto();
	virtual ~Punto();
};

} /* namespace std */

#endif /* PUNTO_H_ */
