// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: PollitoPio.cpp
// Propósito......: Implementación de la clase base PollitoPio para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#include "PollitoPio.h"

PollitoPio::PollitoPio()
{
	this->gen = Genero::Masculino;
}

PollitoPio::~PollitoPio()
{
}

std::string PollitoPio::cant()
{
	std::string cad;
	if (this->gen == Genero::Masculino)
		cad = "un";
	else
		cad = "una";
	return cad;
}

std::string PollitoPio::art()
{
	std::string cad;
	if (this->gen == Genero::Masculino)
		cad = "el";
	else
		cad = "la";
	return cad;
}
