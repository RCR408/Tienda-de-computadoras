#include "Grafica.h"
#include "Procesador.h"
#include <iostream>
#include <string>

using namespace std;

Grafica::Grafica()
{
	graficas = { "RTX 3050","RTX 4060","RX 6600" };
	precio = {5000,7705,4500};
	indexGraficas = 3;
}

void Grafica::menu()
{
	for (int i = 0; i < graficas.size(); i++)
	{
		cout << i + 1 << ". " << graficas[i] << ", Precio:" << precio[i] << "$" << endl;
	}
	cout << "Escribe el index de la grafica a comprar:";
	cin >> indexGraficas;
	indexGraficas -= 1;
	while (indexGraficas < 0 || indexGraficas>2)
	{
		cout << "Error, no era el index correcto, vuelve a escoger:";
		cin >> indexGraficas;
	}
}

string Grafica::GetValues()
{
	if (indexGraficas == 3)
	{
		return "";
	}
	else
	{
		return "Grafica:" + graficas[indexGraficas] + ", Precio:" + to_string(precio[indexGraficas]) + "$\n";
	}
	
}

int Grafica::GetPrecio()
{
	if (indexGraficas == 3)
	{
		return 0;
	}
	else
	{
		return precio[indexGraficas];
	}
}