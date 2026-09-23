#include "PlacaMadre.h"
#include <iostream>
#include <string>

using namespace std;

PlacaMadre::PlacaMadre()
{
	placas = { "H610","B760","Z790" };
	precio = {1500 ,2000,2500 };
	indexPlacas = 3;
}

void PlacaMadre ::menu()
{
	for (int i = 0; i < placas.size(); i++)
	{
		cout << i + 1 << ". " << placas[i] << ", Precio:" << precio[i] << "$" << endl;
	}
	cout << "Escribe el index de la Tarjeta Madre a comprar:";
	cin >> indexPlacas;
	indexPlacas -= 1;
	while (indexPlacas < 0 || indexPlacas>2)
	{
		cout << "Error index incorrecto, escoge uno correcto:";
		cin >> indexPlacas;
	}
}

string PlacaMadre::GetValues()
{
	if (indexPlacas == 3)
	{
		return "";
	}
	else
	{
		return "Placas:" + placas[indexPlacas] + ", Precio:" + to_string(precio[indexPlacas]) + "\n";
	}
}

int PlacaMadre::GetPrecio()
{
	if (indexPlacas == 3)
	{
		return 0;
	}
	else
	{
		return precio[indexPlacas];
	}
}