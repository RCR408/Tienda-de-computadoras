#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Memoria
{
private:
	vector<string> memorias;
	int indexMemorias;
	vector<int> precio;
public:
	Memoria();
	string GetValues();
	int GetPrecio();
	void menu();
};

