#pragma once
#include <iostream>
#include "FuenteDePoder.h"
#include "Gabinete.h"
#include "PlacaMadre.h"
#include "Procesador.h"
#include "Ram.h"
#include "Grafica.h"
#include "Memoria.h"

using namespace std;
class Pedido
{
private:
	string ubicacion;
	int limite;
	string pais;
	string estado;
	string municipio;
	string calle;
	int armarPc;
	string clave;
	string nombre;
	string vencimiento;
	Grafica tarjeta;
	FuenteDePoder fuente;
	Gabinete gabinete;
	PlacaMadre placa;
	Procesador proce;
	Ram memoriaRam;
	Memoria almacenamiento;
	int total;
public:
	Pedido();
	Pedido(Ram, Memoria, PlacaMadre, Procesador, Gabinete, FuenteDePoder, Grafica);
	void menu();
	void EliminarPedido(int);
	string Pago();
	int GetArmarPc();
};

