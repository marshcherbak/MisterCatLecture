#include "Soup.h"



Soup::Soup(string name): Dish(name)
{
}

string Soup::getName()
{
	return "Soup \"" + name + "\" ";
}

