
#include "Pizza.h"

#include <iostream>
using namespace std;
Pizza::Pizza(string name):Dish(name)
{
}

string Pizza::getName()
{
	return "Pizza \"" + name + "\" ";
}
