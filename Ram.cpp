#include "Ram.h"
#include <iostream>
#include <string>

using namespace std;

Ram::Ram()
{
	rams = { "16 GB (2×8) DDR4 3200MHz","32 GB (2×16) DDR5 3600–6000MHz","64 GB DDR5 6000MHz" };
	precio = { 1000 ,2000,4500 };
	indexRam = rams.size()+1;
}

void Ram::menu()
{
	for (int i = 0; i < rams.size(); i++)
	{
		cout << i + 1 << ". " << rams[i] << ", Precio:" << precio[i] << "$" << endl;
	}
	cout << "Escribe el index del Ram a comprar:";
	cin >> indexRam;
	indexRam -= 1;
	while (indexRam < 0 || indexRam>2)
	{
		cout << "Error index incorrecto, escoge uno correcto:";
		cin >> indexRam;
	}
}

string Ram::GetValues()
{
	if (indexRam == rams.size()+1)
	{
		return "";
	}
	else
	{
		return "Placas:" + rams[indexRam] + ", Precio:" + to_string(precio[indexRam]) + "$\n";
	}
}

int Ram::GetPrecio()
{
	if (indexRam == rams.size() + 1)
	{
		return 0;
	}
	else
	{
		return precio[indexRam];
	}
}
