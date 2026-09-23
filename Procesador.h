#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Procesador
{
private:
	vector<string> procesadores;
	int indexProcesador;
	vector<int> precio;
public:
	Procesador();
	void menu();
	string GetValues();
	int GetPrecio();
};

