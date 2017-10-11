#include "Dish.h"
#include <iostream>
using namespace std;


Dish::Dish(string name, double price)
{
	this->name = name;
	this->price = price;
}

string Dish::getName()
{
	return name;
}

double Dish::getPrice()
{
	return price;
}

int Dish::getCookingTime()
{
	return cookingTime;
}
