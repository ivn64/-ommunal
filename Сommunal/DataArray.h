#pragma once

using namespace std;

#include<fstream>

template <class T>
class DataArray
{
	T *myArray;
	int length, top; // длина и последний элемент
public:
	DataArray();
	~DataArray();
	void AddItem(const T&);
	void RemoveItem(int);
	int GetTop();
	T GetItem(int);
	void SaveToFile(string);
	void LoadFromFile(string);
};

template <class T>
DataArray<T>::DataArray()
{
	top = 0;
	length = 10;
	myArray = new T[length];
}

template <class T>
DataArray<T>::~DataArray()
{
	delete[] myArray;
}

template <class T>
void DataArray<T>::AddItem(const T &value)
{
	if (top < length)
		myArray[top++] = value;
}

template <class T>
void DataArray<T>::RemoveItem(int index)
{
	if (index < top)
		for (int i = index; i < top; i++)
		{
			myArray[i] = myArray[i + 1];
		}
	top--;
}
template <class T>
int DataArray<T>::GetTop()
{
	return top;
}
template <class T>
T DataArray<T>::GetItem(int i)
{
	return myArray[i];
}
template <class T>
void DataArray<T>::SaveToFile(string fileName)
{
	ofstream fileArray;
	fileArray.open(fileName);
	fileArray.write((char*)&top, sizeof(top));
	for (int i = 0; i < top; i++)
	{
		fileArray.write((char*)&myArray[i], sizeof(myArray[i]));
	}
	fileArray.close();
}
template <class T>
void DataArray<T>::LoadFromFile(string fileName)
{
	ifstream fileArray;
	fileArray.open(fileName);
	fileArray.read((char*)&top, sizeof(top));
	for (int i = 0; i < top; i++)
	{
		fileArray.read((char*)&myArray[i], sizeof(myArray[i]));
	}
	fileArray.close();
}