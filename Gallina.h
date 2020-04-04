// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Gallina.h
// Propósito......: Declaración de la clase derivada Gallina para la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#pragma once
#include "PollitoPio.h"

class Gallina :
	public PollitoPio
{
private:
	std::string soy = "gallina";
	std::string digo = "coo";

public:
	Gallina();
	~Gallina();
	std::string quien();
	std::string habla();
};

