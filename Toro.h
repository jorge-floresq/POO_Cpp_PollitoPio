// UVM Plantel....: Hispano
// Carrera........: Ingenier�a en Sistemas Computacionales
// Materia........: Programaci�n Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: Toro.h
// Prop�sito......: Declaraci�n de la clase derivada Toro para la canci�n "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versi�n........: 1.0     Version inicial
//

#pragma once
#include "PollitoPio.h"

class Toro :
	public PollitoPio
{
private:
	std::string soy = "toro";
	std::string digo = "muuu";

public:
	Toro();
	~Toro();
	std::string quien();
	std::string habla();

};

