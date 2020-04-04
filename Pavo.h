// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Pavo.h
// Propósito......: Declaración de la clase derivada pavo para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#pragma once
#include "PollitoPio.h"

class Pavo :
	public PollitoPio
{
private:
	std::string soy = "pavo";
	std::string digo = "glu glu glu";

public:
	Pavo();
	~Pavo();
	std::string quien();
	std::string habla();
};

