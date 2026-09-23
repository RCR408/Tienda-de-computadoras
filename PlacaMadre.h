#pragma once
#include <iostream>
#include <vector>

using namespace std;
class PlacaMadre
{
private:
	vector<string> placas;
	int indexPlacas;
	vector<int> precio;
public:
	PlacaMadre();
	string GetValues();
	int GetPrecio();
	void menu();
};

