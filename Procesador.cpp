#include "Procesador.h"
#include <iostream>
#include <string>

using namespace std;

Procesador::Procesador()
{
	procesadores = { "i3-14100F","Ryzen 5 7600","Ryzen 7 7800X3D" };
	precio = { 3300,6600,9900 };
	indexProcesador = 3;
}

void Procesador::menu()
{
	for (int i = 0; i < procesadores.size(); i++)
	{
		cout << i + 1 << ". " << procesadores[i] << ", Precio:" << precio[i] << "$" << endl;
	}
	cout << "Escribe el index del procesador a comprar:";
	cin >> indexProcesador;
	indexProcesador -= 1;
	while (indexProcesador<0 || indexProcesador>2)
	{
		cout << "Error index incorrecto, escoge uno correcto:";
		cin >> indexProcesador;
	}
}

string Procesador::GetValues()
{
	if (indexProcesador == 3)
	{
		return "";
	}
	else
	{
		return "Procesador:" + procesadores[indexProcesador] + ", Precio:" + to_string(precio[indexProcesador]) + "$\n";
	}
}

int Procesador::GetPrecio()
{
	if (indexProcesador == 3)
	{
		return 0;
	}
	else
	{
		return precio[indexProcesador];
	}
}