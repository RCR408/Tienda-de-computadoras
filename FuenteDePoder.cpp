#include "FuenteDePoder.h"
#include <iostream>
#include <string>

using namespace std;

FuenteDePoder::FuenteDePoder()
{
	poder = { "EVGA 500 W 80+ Bronze","Corsair CX650 80+ Bronze","Seasonic Focus 750 W 80+ Gold" };
	precio = { 1000 ,2000,3000 };
	indexPoder = poder.size()+1;
}

void FuenteDePoder::menu()
{
	for(int i = 0; i<poder.size();i++)
	{
		cout << i+1<<". "<< poder[i] << ", Precio:" << precio[i] << "$" << endl;
	}
	cout << "Escribe el index Fuente de poder a comprar:";
	cin >> indexPoder;
	indexPoder -= 1;
	while (indexPoder < 0 || indexPoder>2)
	{
		cout << "Error index incorrecto, escoge uno correcto:";
		cin >> indexPoder;
	}
}

string FuenteDePoder::GetValues()
{
	if(indexPoder==poder.size()+1)
	{
		return "";
	}
	else
	{
		return "Fuentes:" + poder[indexPoder] + ", Precio:" + to_string(precio[indexPoder]) + "$\n";
	}
}

int FuenteDePoder::GetPrecio()
{
	if (indexPoder == poder.size()+1)
	{
		return 0;
	}
	else
	{
		return precio[indexPoder];
	}
}

