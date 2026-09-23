#include "Memoria.h"
#include <iostream>
#include <string>

using namespace std;

Memoria::Memoria()
{
	memorias = { "SSD SATA 500 GB","SSD NCMe 1 TB Gen 3","SSD NVMe 1-2 TB Gen 4" };
	precio = { 500,1000,1000 };
	indexMemorias = 3;
}

void Memoria::menu()
{
	for (int i = 0; i < memorias.size(); i++)
	{
		cout << i + 1 << ". " << memorias[i] << ", Precio:" << precio[i] << "$" << endl;
	}
	cout << "Escribe el index de la memoria a comprar:";
	cin >> indexMemorias;
	indexMemorias -= 1;
	while (indexMemorias < 0 || indexMemorias>2)
	{
		cout << "Error index incorrecto, escoge uno correcto:";
		cin >> indexMemorias;
	}
}

string Memoria::GetValues()
{
	if (indexMemorias == 3)
	{
		return "";
	}
	else
	{
		return "Memoria:" + memorias[indexMemorias] + ", Precio:" + to_string(precio[indexMemorias]) + "$\n";
	}
}

int Memoria::GetPrecio()
{
	if (indexMemorias == 3)
	{
		return 0;
	}
	else
	{
		return precio[indexMemorias];
	}
}