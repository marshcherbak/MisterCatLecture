#pragma once
#include <string>
using namespace std;

#include "Dish.h"
class Soup: public Dish
{
public:
	Soup(string name);
	string getName() override;
};

