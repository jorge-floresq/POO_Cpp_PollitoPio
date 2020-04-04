// UVM Plantel....: Hispano
// Carrera........: Ingenier�a en Sistemas Computacionales
// Materia........: Programaci�n Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: PollitoPio.h
// Prop�sito......: Declaraci�n de la clase base PollitoPio para la canci�n "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versi�n........: 1.0     Version inicial
//

#pragma once
#include <iostream>

enum class Genero : bool {
	Masculino = false,
	Femenino = true,
};

class PollitoPio
{
protected:
	Genero gen;
public:
	PollitoPio();
	~PollitoPio();
	std::string cant();
	std::string art();
	virtual std::string quien() = 0;
	virtual std::string habla() = 0;

};

