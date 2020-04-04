// UVM Plantel....: Hispano
// Carrera........: Ingenier�a en Sistemas Computacionales
// Materia........: Programaci�n Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Gato.cpp
// Prop�sito......: Implementaci�n de la clase derivada Gato para la canci�n "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versi�n........: 1.0     Version inicial
//

#include "Gato.h"

Gato::Gato()
{
	this->gen = Genero::Masculino;
}

Gato::~Gato()
{
}

std::string Gato::quien()
{
	return this->soy;
}

std::string Gato::habla()
{
	return this->digo;
}
