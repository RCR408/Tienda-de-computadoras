#include "Gabinete.h"
#include <iostream>
#include <string>

using namespace std;

Gabinete::Gabinete()
{
	gabinete = { "AeroCool Cyclon","NZXT H510","AIO 240mm" };
	precio = { 500,1000,1200 };
	indexGabinete = 3;
}

void Gabinete::menu()
{
	for (int i = 0; i < gabinete.size(); i++)
	{
		cout << i + 1 << ". " << gabinete[i] << ", Precio:" << precio[i] << "$" << endl;
	}
	cout << "Escribe el index del gabinete a comprar:";
	cin >> indexGabinete;
	indexGabinete -= 1;
	while (indexGabinete < 0 || indexGabinete>2)
	{
		cout << "Error index incorrecto, escoge uno correcto:";
		cin >> indexGabinete;
	}
}

string Gabinete::GetValues()
{
	if (indexGabinete == 3)
	{
		return "";
	}
	else
	{
		return "Gabinete:" + gabinete[indexGabinete] + ", Precio:" + to_string(precio[indexGabinete]) + "$\n";
	}
	
}

int Gabinete::GetPrecio()
{
	if (indexGabinete == 3)
	{
		return 0;
	}
	else
	{
		return precio[indexGabinete];
	}
}