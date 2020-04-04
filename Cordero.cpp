// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Cordero.cpp
// Propósito......: Implementación de la clase derivada Cordero para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#include "Cordero.h"

Cordero::Cordero()
{
	this->gen = Genero::Masculino;
}

Cordero::~Cordero()
{
}

std::string Cordero::quien()
{
	return this->soy;
}

std::string Cordero::habla()
{
	return this->digo;
}
