/*
 * principal.cpp
 *
 *  Created on: 18 de mar. de 2016
 *      Author: ernesto
 */

#include<iostream>
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include "Punto.h"
#include "Segmento.h"

using namespace std;

int main(int argc, char *argv[]){
int x,y;
Punto a, b;
Segmento seg;

	cout<<"Ingrese x";
	cin>>x;

	cout<<"Ingrese y";
	cin>>y;
	a.setp(x,y);
	cout<<"Ingrese x";
	cin>>x;
	b.setp(x,y);
	cout<<"Ingrese x";
	cin>>y;
	std::cout <<"Largo Segmento "<<seg.largoSegmento(a,b);
	return 0;
}


