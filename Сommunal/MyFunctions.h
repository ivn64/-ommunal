#pragma once

#include <string>

using namespace std;
using namespace System;

inline string SystemStringToStlString(String ^s)
{
	using namespace Runtime::InteropServices;
	const char* ptr = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	return string(ptr);
}

inline String^ StlStringToSystemString(string temp)
{
	String^ t = gcnew String(temp.c_str());
	return t;
}

inline float SystemStringToFloat(String^ s)
{
	try
	{
		float x = float::Parse(s);
		return x;
	}
	catch (FormatException^)
	{
	}
	return 0;
}

inline int SystemStringToInt(String^ s)
{
	try
	{
		int x = Int32::Parse(s);
		return x;
	}
	catch (FormatException^)
	{
	}
	return 0;
}

