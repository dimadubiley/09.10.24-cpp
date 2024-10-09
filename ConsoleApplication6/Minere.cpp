#include <iostream>
#include "Minere.h"

using namespace std;

Minere::Minere()
{
	length = 80;
	str = new char[length];
}

Minere::Minere(const char* obj)
{
	length = strlen(obj);
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj);
}

Minere::Minere(const Minere& obj)
{
	length = obj.length;
	str = new char[length + 1];
	strcpy_s(str, length + 1, obj.str);
}

Minere::~Minere()
{
	delete[] str;
}

void Minere::Print()
{
	cout << str << endl;
}
