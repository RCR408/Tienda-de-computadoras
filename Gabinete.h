#pragma once
#include <iostream>
#include <vector>

using namespace std;
class Gabinete
{
private:
	vector<string> gabinete;
	int indexGabinete;
	vector<int> precio;
public:
	Gabinete();
	string GetValues();
	int GetPrecio();
	void menu();
};

