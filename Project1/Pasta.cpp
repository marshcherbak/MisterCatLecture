#include "Pasta.h"
#include <iostream>
using namespace std;


Pasta::Pasta(string name) : Dish(name)
{
}

string Pasta::getName()
{
	return "Pasta\"" + name + "\" ";
}


