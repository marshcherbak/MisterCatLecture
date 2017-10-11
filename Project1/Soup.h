#pragma once
#include <string>
using namespace std;

#include "Dish.h"
class Soup: public Dish
{
public:
	Soup(string name, double);
	string getName() override;
};

