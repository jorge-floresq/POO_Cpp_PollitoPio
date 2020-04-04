// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Gallina.cpp
// Propósito......: Implementación de la clase derivada Gallina para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#include "Gallina.h"

Gallina::Gallina()
{
	this->gen = Genero::Femenino;
}

Gallina::~Gallina()
{
}

std::string Gallina::quien()
{
	return this->soy;
}

std::string Gallina::habla()
{
	return this->digo;
}
