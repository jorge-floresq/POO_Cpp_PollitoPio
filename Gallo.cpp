// UVM Plantel....: Hispano
// Carrera........: Ingenier�a en Sistemas Computacionales
// Materia........: Programaci�n Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Gallo.cpp
// Prop�sito......: Implementaci�n de la clase derivada Gallo para la canci�n "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versi�n........: 1.0     Version inicial
//

#include "Gallo.h"

Gallo::Gallo()
{
	this->gen = Genero::Masculino;
}

Gallo::~Gallo()
{
}

std::string Gallo::quien()
{
	return this->soy;
}

std::string Gallo::habla()
{
	return this->digo;
}
