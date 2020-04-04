// UVM Plantel....: Hispano
// Carrera........: Ingeniería en Sistemas Computacionales
// Materia........: Programación Orientada a Objetos
// Profesor.......: Jorge Alberto Flores Quintana
// Fecha..........: 2020/04/04
// Programador(es): Jorge Alberto Flores Quintana 66384419 jorge_floresq@my.uvm.edu.mx
// Programa.......: cancionPollitoPio.cpp
// Propósito......: Programa que utiliza la clase base y derivadas para mostrar en pantalla la canción "El pollito pio"
//                  (c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs
// Versión........: 1.0     Version inicial
//

#include <iostream>
#include <thread>  // para acceder a método std::this_thread::sleep_for(std::chrono::milliseconds(e)); ver https://www.softwaretestinghelp.com/cpp-sleep/

#include "Pollito.h"
#include "Gallina.h"
#include "Gallo.h"
#include "Pavo.h"
#include "Paloma.h"
#include "Gato.h"
#include "Perro.h"
#include "Cabra.h"
#include "Cordero.h"
#include "Vaca.h"
#include "Toro.h"
#include "Tractor.h"

// prototipos para los métodos locales
void estrofa1(const int, Pollito&);
void estrofa2(const int, Pollito&, Gallina&);
void estrofa3(const int, Pollito&, Gallina&, Gallo&);
void estrofa4(const int, Pollito&, Gallina&, Gallo&, Pavo&);
void estrofa5(const int, Pollito&, Gallina&, Gallo&, Pavo&, Paloma&);
void estrofa6(const int, Pollito&, Gallina&, Gallo&, Pavo&, Paloma&, Gato&);
void estrofa7(const int, Pollito&, Gallina&, Gallo&, Pavo&, Paloma&, Gato&, Perro&);
void estrofa8(const int, Pollito&, Gallina&, Gallo&, Pavo&, Paloma&, Gato&, Perro&, Cabra&);
void estrofa9(const int, Pollito&, Gallina&, Gallo&, Pavo&, Paloma&, Gato&, Perro&, Cabra&, Cordero&);
void estrofa10(const int, Pollito&, Gallina&, Gallo&, Pavo&, Paloma&, Gato&, Perro&, Cabra&, Cordero&, Vaca&);
void estrofa11(const int, Pollito&, Gallina&, Gallo&, Pavo&, Paloma&, Gato&, Perro&, Cabra&, Cordero&, Vaca&, Toro&);
void estrofa12(const int, Pollito&, Tractor&);

int main()
{
    std::cout << "El pollito pio " << std::endl; 
    std::cout << "(c)2010 PulcinoPioTV https://youtu.be/dhsy6epaJGs" << std::endl;
    std::cout << std::endl;

    const int pausa = 500;    // en milisegundos para espera

    Pollito pollito;
    Gallina gallina;
    Gallo gallo;
    Pavo pavo;
    Paloma paloma;
    Gato gato;
    Perro perro;
    Cabra cabra;
    Cordero cordero;
    Vaca vaca;
    Toro toro;
    Tractor tractor;

    do {
        estrofa1(pausa, pollito);
        estrofa2(pausa, pollito, gallina);
        estrofa3(pausa, pollito, gallina, gallo);
        estrofa4(pausa, pollito, gallina, gallo, pavo);
        estrofa5(pausa, pollito, gallina, gallo, pavo, paloma);
        estrofa6(pausa, pollito, gallina, gallo, pavo, paloma, gato);
        estrofa7(pausa, pollito, gallina, gallo, pavo, paloma, gato, perro);
        estrofa8(pausa, pollito, gallina, gallo, pavo, paloma, gato, perro, cabra);
        estrofa9(pausa, pollito, gallina, gallo, pavo, paloma, gato, perro, cabra, cordero);
        estrofa10(pausa, pollito, gallina, gallo, pavo, paloma, gato, perro, cabra, cordero, vaca);
        estrofa11(pausa, pollito, gallina, gallo, pavo, paloma, gato, perro, cabra, cordero, vaca, toro);
        estrofa12(pausa, pollito, tractor);
        break;
    } while (true);   // se deja opcion para implementar la repetición

    return EXIT_SUCCESS;
}

void estrofa1(const int e, Pollito& pllito)
{
    std::cout << "En la radio hay " << pllito.cant() << " " << pllito.quien() << "," << std::endl;
    std::cout << "en la radio hay " << pllito.cant() << " " << pllito.quien() << "," << std::endl;
    std::cout << "y " << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa2(const int e, Pollito& pllito, Gallina& glla)
{
    std::cout << "En la radio hay " << glla.cant() << " " << glla.quien() << "," << std::endl;
    std::cout << "en la radio hay " << glla.cant() << " " << glla.quien() << "," << std::endl;
    std::cout << "y " << glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa3(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo)
{
    std::cout << "En la radio hay tambien " << gllo.cant() << " " << gllo.quien() << "," << std::endl;
    std::cout << "en la radio hay tambien " << gllo.cant() << " " << gllo.quien() << "," << std::endl;
    std::cout << "y " << gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << std::endl << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa4(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo)
{
    std::cout << "En la radio hay " << pvo.cant() << " " << pvo.quien() << "," << std::endl;
    std::cout << "en la radio hay " << pvo.cant() << " " << pvo.quien() << "," << std::endl;
    std::cout << "y " << pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << std::endl << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}


void estrofa5(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo, Paloma& plma)
{
    std::cout << "En la radio hay " << plma.cant() << " " << plma.quien() << "," << std::endl;
    std::cout << "en la radio hay " << plma.cant() << " " << plma.quien() << "," << std::endl;
    std::cout << "y " << plma.art() << " " << plma.quien() << " " << plma.habla() << ", " << \
        pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << std::endl << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << std::endl << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa6(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo, Paloma& plma, Gato& gto)
{
    std::cout << "En la radio hay " << gto.cant() << " " << gto.quien() << "," << std::endl;
    std::cout << "en la radio hay " << gto.cant() << " " << gto.quien() << "," << std::endl;
    std::cout << "y " << gto.art() << " " << gto.quien() << " " << gto.habla() << ", " << \
        plma.art() << " " << plma.quien() << " " << plma.habla() << ", " << std::endl << \
        pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << std::endl << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa7(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo, Paloma& plma, Gato& gto, Perro& prro)
{

    std::cout << "En la radio hay " << prro.cant() << " " << prro.quien() << "," << std::endl;
    std::cout << "en la radio hay " << prro.cant() << " " << prro.quien() << "," << std::endl;
    std::cout << "y " << prro.art() << " " << prro.quien() << " " << prro.habla() << ", " << \
        gto.art() << " " << gto.quien() << " " << gto.habla() << ", " << std::endl << \
        plma.art() << " " << plma.quien() << " " << plma.habla() << ", " << \
        pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << std::endl << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << std::endl << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa8(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo, Paloma& plma, Gato& gto, Perro& prro, Cabra& cbra)
{
    std::cout << "En la radio hay " << cbra.cant() << " " << cbra.quien() << "," << std::endl;
    std::cout << "en la radio hay " << cbra.cant() << " " << cbra.quien() << "," << std::endl;
    std::cout << "y " << cbra.art() << " " << cbra.quien() << " " << cbra.habla() << ", " << \
        prro.art() << " " << prro.quien() << " " << prro.habla() << ", " << std::endl << \
        gto.art() << " " << gto.quien() << " " << gto.habla() << ", " << \
        plma.art() << " " << plma.quien() << " " << plma.habla() << ", " << std::endl << \
        pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << std::endl << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/portable/compatible con C++!
}

void estrofa9(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo, Paloma& plma, Gato& gto, Perro& prro, Cabra& cbra, Cordero& crdro)
{
    std::cout << "En la radio hay " << crdro.cant() << " " << crdro.quien() << "," << std::endl;
    std::cout << "en la radio hay " << crdro.cant() << " " << crdro.quien() << "," << std::endl;
    std::cout << "y " << crdro.art() << " " << crdro.quien() << " " << crdro.habla() << ", " << \
        cbra.art() << " " << cbra.quien() << " " << cbra.habla() << ", " << std::endl << \
        prro.art() << " " << prro.quien() << " " << prro.habla() << ", " << \
        gto.art() << " " << gto.quien() << " " << gto.habla() << ", " << std::endl << \
        plma.art() << " " << plma.quien() << " " << plma.habla() << ", " << \
        pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << std::endl << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << std::endl << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa10(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo, Paloma& plma, Gato& gto, Perro& prro, Cabra& cbra, Cordero& crdro, Vaca& vca)
{
    std::cout << "En la radio hay " << vca.cant() << " " << vca.quien() << "," << std::endl;
    std::cout << "en la radio hay " << vca.cant() << " " << vca.quien() << "," << std::endl;
    std::cout << "y " << vca.art() << " " << vca.quien() << " " << vca.habla() << ", " << \
        crdro.art() << " " << crdro.quien() << " " << crdro.habla() << ", " << std::endl << \
        cbra.art() << " " << cbra.quien() << " " << cbra.habla() << ", " << \
        prro.art() << " " << prro.quien() << " " << prro.habla() << ", " << std::endl << \
        gto.art() << " " << gto.quien() << " " << gto.habla() << ", " << \
        plma.art() << " " << plma.quien() << " " << plma.habla() << ", " << std::endl << \
        pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << std::endl << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa11(const int e, Pollito& pllito, Gallina& glla, Gallo& gllo, Pavo& pvo, Paloma& plma, Gato& gto, Perro& prro, Cabra& cbra, Cordero& crdro, Vaca& vca, Toro& tro)
{
    std::cout << "En la radio hay " << tro.cant() << " " << tro.quien() << "," << std::endl;
    std::cout << "en la radio hay " << tro.cant() << " " << tro.quien() << "," << std::endl;
    std::cout << "y " << tro.art() << " " << tro.quien() << " " << tro.habla() << ", " << \
        vca.art() << " " << vca.quien() << " " << vca.habla() << ", " << std::endl << \
        crdro.art() << " " << crdro.quien() << " " << crdro.habla() << ", " << \
        cbra.art() << " " << cbra.quien() << " " << cbra.habla() << ", " << std::endl << \
        prro.art() << " " << prro.quien() << " " << prro.habla() << ", " << \
        gto.art() << " " << gto.quien() << " " << gto.habla() << ", " << std::endl << \
        plma.art() << " " << plma.quien() << " " << plma.habla() << ", " << \
        pvo.art() << " " << pvo.quien() << " " << pvo.habla() << ", " << std::endl << \
        gllo.art() << " " << gllo.quien() << " " << gllo.habla() << ", " << \
        glla.art() << " " << glla.quien() << " " << glla.habla() << ", " << std::endl << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "," << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << std::endl;
    std::cout << pllito.art() << " " << pllito.quien() << " " << pllito.habla() << ", " << \
        pllito.art() << " " << pllito.quien() << " " << pllito.habla() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}

void estrofa12(const int e, Pollito& pllito, Tractor& trct)
{
    std::cout << "En la radio hay " << trct.cant() << " " << trct.quien() << "," << std::endl;
    std::cout << "en la radio hay " << trct.cant() << " " << trct.quien() << "," << std::endl;
    std::cout << "y " << trct.art() << " " << trct.quien() << " " << trct.habla() << ", ";
    std::cout << "y " << pllito.art() << " " << pllito.quien() << "... " << pllito.kaput() << "!" << std::endl << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(e));      // hace la funcion de espera por n milisegundos y es portable/compatible con C++!
}
