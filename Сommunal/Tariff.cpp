#include "Tariff.h"

Tariff::Tariff()
{
	name = "Новый объект";
	isMeter = true;
	unit = "м2";
	price = 0;
}
Tariff::Tariff(string tempName, bool tempIsMeter, string tempUnit, float tempPrice)
{
	name = tempName;
	isMeter = tempIsMeter;
	unit = tempUnit;
	price = tempPrice;
}
string Tariff::GetName()
{
	return name;
}
void Tariff::SetName(string tempName)
{
	name = tempName;
}
bool Tariff::GetIsMeter()
{
	return isMeter;
}
void Tariff::SetIsMeter(bool tempIsMeter)
{
	isMeter = tempIsMeter;
}
string Tariff::GetUnit()
{
	return unit;
}
void Tariff::SetUnit(string tempUnit)
{
	unit = tempUnit;
}
float Tariff::GetPrice()
{
	return price;
}
void Tariff::SetPrice(float tempPrice)
{
	price = tempPrice;
}