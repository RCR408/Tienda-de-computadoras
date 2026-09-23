
#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Grafica
{
private:
	vector<string> graficas;
	int indexGraficas;
	vector<int> precio;
public:
	Grafica();
	string GetValues();
	int GetPrecio();
	void menu();
};

