#include "Pasta.h"
#include <iostream>
using namespace std;


Pasta::Pasta(string name, double price) : Dish(name, price)
{
	cookingTime = 10;
}

string Pasta::getName()
{
	return "Pasta\" " + name + "\" ";
}


