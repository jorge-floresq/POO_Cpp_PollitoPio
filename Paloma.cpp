// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Paloma.cpp
// Propósito......: Declaración de la clase derivada Paloma para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
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
