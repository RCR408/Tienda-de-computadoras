#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Ram
{
private:
	vector<string> rams;
	int indexRam;
	vector<int> precio;
public:
	Ram();
	string GetValues();
	int GetPrecio();
	void menu();
};

