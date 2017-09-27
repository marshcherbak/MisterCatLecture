#include "Dish.h"
#include <iostream>
using namespace std;


Dish::Dish(string name)
{
	this->name = name;
}

string Dish::getName()
{
	return name;
}
