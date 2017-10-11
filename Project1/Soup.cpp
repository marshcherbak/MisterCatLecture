#include "Soup.h"



Soup::Soup(string name, double price): Dish(name, price)
{
	cookingTime = 20;
}

string Soup::getName()
{
	return "Soup \"" + name + "\" ";
}

