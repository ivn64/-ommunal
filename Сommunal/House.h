#pragma once

#include <string>

using namespace std;

class House
{
	string name;
	string adress;
	float totalArea;
	int numberOfPeoples;
	bool isPrivate;
public:
	House();
	House(string, string, float, int, bool);
	string GetName();
	void SetName(string);
	string GetAdress();
	void SetAdress(string);
	float GetTotalArea();
	void SetTotalArea(float totalArea);
	int GetNumberOfPeoples();
	void SetNumberOfPeoples(int);
	bool GetIsPrivate();
	void SetIsPrivate(bool);
};