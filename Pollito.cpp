// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Pollito.cpp
// Propósito......: Implementación de la clase derivada Pollito para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#include "Pollito.h"
#include <ostream>

Pollito::Pollito()
{
	this->gen = Genero::Masculino;
}

Pollito::~Pollito()
{
}

std::string Pollito::quien()
{
	return this->soy;
}

std::string Pollito::habla()
{
	return this->digo;
}

std::string Pollito::kaput()
{
	return "prrr";
}
