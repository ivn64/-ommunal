#include "House.h"

House::House()
{
	name = "Новый объект";
	adress = "адрес";
	totalArea = 0;
	numberOfPeoples = 0;
	isPrivate = false;
}
House::House(string tempName, string tempAdress, float tempTotalArea, int tempNumberOfPeoples, bool tempIsPrivate)
{
	name = tempName;
	adress = tempAdress;
	totalArea = tempTotalArea;
	numberOfPeoples = tempNumberOfPeoples;
	isPrivate = tempIsPrivate;
}
string House::GetName()
{
	return name;
}
void House::SetName(string tempName)
{
	name = tempName;
}
string House::GetAdress()
{
	return adress;
}
void House::SetAdress(string tempAdress)
{
	adress = tempAdress;
}
float House::GetTotalArea()
{
	return totalArea;
}
void House::SetTotalArea(float tempTotalArea)
{
	totalArea = tempTotalArea;
}
int House::GetNumberOfPeoples()
{
	return numberOfPeoples;
}
void House::SetNumberOfPeoples(int tempNumberOfPeoples)
{
	numberOfPeoples = tempNumberOfPeoples;
}
bool House::GetIsPrivate()
{
	return isPrivate;
}
void House::SetIsPrivate(bool tempIsPrivate)
{
	isPrivate = tempIsPrivate;
}