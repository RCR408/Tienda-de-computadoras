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

Pedido::Pedido()
{
	ubicacion="";
	limite = 30000;
	pais = "";
	estado="";
    municipio="";
	calle="";
	armarPc=0;
    clave = "";
	nombre = "";
	vencimiento="";
	total = 0;
}

Pedido::Pedido(Ram ramV, Memoria memoriaV,PlacaMadre placaV,Procesador proceV, Gabinete gabineteV,FuenteDePoder fuenteV, Grafica graficaV)
{
	tarjeta = graficaV;
	fuente = fuenteV;
	gabinete = gabineteV;
	placa = placaV;
	proce = proceV;
	memoriaRam = ramV;
	almacenamiento = memoriaV;
	total = 0;
	armarPc = 0;
	limite = 30000;

}

void Pedido::EliminarPedido(int seccion)
{
	switch (seccion)
	{
	case 1:
		memoriaRam = Ram(); break;
	case 2:
		almacenamiento = Memoria(); break;
	case 3:
		placa = PlacaMadre(); break;
	case 4:
		proce = Procesador(); break;
	case 5:
		gabinete = Gabinete(); break;
	case 6:
		fuente = FuenteDePoder(); break;
	case 7:
		tarjeta = Grafica(); break;
	default:
		cout << "No existe ese indice" << endl;
		break;
	}
}

string Pedido::Pago()
{
	string clases1 = memoriaRam.GetValues() + almacenamiento.GetValues() + placa.GetValues() + proce.GetValues() + gabinete.GetValues() + fuente.GetValues() + tarjeta.GetValues();
	total = tarjeta.GetPrecio() + fuente.GetPrecio() + gabinete.GetPrecio() + placa.GetPrecio() + proce.GetPrecio() + memoriaRam.GetPrecio() + almacenamiento.GetPrecio();
	if(limite >= total)
	{
		if (armarPc == 0) 
		{
			cout << "Nombre Completo:(Sin espacios)" << endl;
			cin >> nombre;

			cout << "Clave:(Sin espacios)" << endl;
			cin >> clave;

			cout << "Vencimiento:(Sin espacios)" << endl;
			cin >> vencimiento;

			return "Tu compra fue un exito, ordenaste los siguientes productos:\n" + clases1 + "Ubicacion:" + ubicacion + "\n" + "Nombre:" + nombre + "\n" + "Clave:" + clave + "\n" + "Vencimiento:" + vencimiento + "\n" + "Total:" + to_string(total);
		}
		else
		{
			if (memoriaRam.GetPrecio() == 0 || almacenamiento.GetPrecio() == 0 || placa.GetPrecio() == 0 || proce.GetPrecio() == 0 || gabinete.GetPrecio() == 0 || fuente.GetPrecio() == 0 || tarjeta.GetPrecio() == 0)
			{
				return "Faltan componentes";
			}
			else
			{
				cout << "Nombre Completo:(Sin espacios)" << endl;
				cin >> nombre;

				cout << "Clave:(Sin espacios)" << endl;
				cin >> clave;

				cout << "Vencimiento:(Sin espacios)" << endl;
				cin >> vencimiento;

				return "Tu compra fue un exito, ordenaste los siguientes productos para armar tu pc:\n" + clases1 + "Ubicacion:" + ubicacion + "\n" + "Nombre:" + nombre + "\n" + "Clave:" + clave + "\n" + "Vencimiento:" + vencimiento + "\n" + "Total:" + to_string(total);
			}
		}
	}
	else
	{
		return "Superas tu limite de compra";
	}
}

void Pedido::menu()
{

	cout << "Quieres armar una pc completa o solo los componentes?(Escribe 0 si solo quieres las piezas, y escribe 1 si quieres que armemos tu pc):"<<endl;
	cin >> armarPc;
	while (armarPc!=0&&armarPc!=1)
	{
		cout << "Numero incorrecto,Quieres armar una pc completa o solo los componentes?(Escribe 0 si solo quieres las piezas, y escribe 1 si quieres que armemos tu pc):"<<endl;
		cin >> armarPc;
	}
	
	cout << "Cual es tu limite de gasto:" << endl;
	cin >> limite;
	while (limite<0)
	{
		cout << "Tu limite es negativo:" << endl;
		cin >> limite;
	}
	
	cout << "De que pais eres:(Todo Seguido)" << endl;
	cin >> pais;

	cout << "De que estado eres:(Todo Seguido)" << endl;
	cin >> estado;

	cout << "De que municipio eres:(Todo Seguido)" << endl;
	cin >> municipio;

	cout << "Calle y Numero:(Todo Seguido)" << endl;
	cin >> calle;

	ubicacion = pais + " " + estado + " " + municipio + " " + calle;

}

int Pedido::GetArmarPc()
{
	return armarPc;
}

