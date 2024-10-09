#include <iostream>
#include "Minere.h"

using namespace std;

int main()
{
	Minere obj1("Hello");
	obj1.Print();
	Minere obj2(obj1);
	obj2.Print();
}