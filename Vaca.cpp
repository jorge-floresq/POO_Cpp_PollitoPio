// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Vaca.cpp
// Propósito......: Implementación de la clase derivada Vaca para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#include "Vaca.h"

Vaca::Vaca()
{
	this->gen = Genero::Femenino;
}

Vaca::~Vaca()
{
}

std::string Vaca::quien()
{
	return this->soy;
}

std::string Vaca::habla()
{
	return this->digo;
}
