#pragma once

#include <string>

using namespace std;

class Tariff
{
	string name;
	bool isMeter;
	string unit;
	float price;
public:
	Tariff();
	Tariff(string, bool, string, float);
	string GetName();
	void SetName(string);
	bool GetIsMeter();
	void SetIsMeter(bool);
	string GetUnit();
	void SetUnit(string);
	float GetPrice();
	void SetPrice(float);
};