// UVM Plantel....: Hispano
// Carrera........: Ingenier�a en Sistemas Computacionales
// Materia........: Programaci�n Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Paloma.cpp
// Prop�sito......: Declaraci�n de la clase derivada Paloma para la canci�n "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versi�n........: 1.0     Version inicial
//

#include "Paloma.h"

Paloma::Paloma()
{
	this->gen = Genero::Femenino;
}

Paloma::~Paloma()
{
}

std::string Paloma::quien()
{
	return this->soy;
}

std::string Paloma::habla()
{
	return this->digo;
}
