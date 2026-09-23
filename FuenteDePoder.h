#pragma once
#include <iostream>
#include <vector>
using namespace std;

class FuenteDePoder
{
private:
	vector<string> poder;
	int indexPoder;
	vector<int> precio;
public:
	FuenteDePoder();
	string GetValues();
	int GetPrecio();
	void menu();
};

