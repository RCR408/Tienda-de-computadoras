#pragma once
#include "Pedido.h"
#include <iostream>
#include "FuenteDePoder.h"
#include "Gabinete.h"
#include "PlacaMadre.h"
#include "Procesador.h"
#include "Ram.h"
#include "Grafica.h"
#include "Memoria.h"
#include <string>

using namespace std;
class Tienda
{
private:
    Ram ram;
    Memoria almacenamiento;
    PlacaMadre placa;
    Procesador proce;
    Gabinete gabinete;
    FuenteDePoder fuente;
    Grafica grafica;
    Pedido pedido;
    int index = 0;
    int indexE = 0;
public:
    Tienda();
    Tienda(Ram, Memoria, PlacaMadre, Procesador, Gabinete, FuenteDePoder, Grafica,Pedido);
    void MenuMain();
};

