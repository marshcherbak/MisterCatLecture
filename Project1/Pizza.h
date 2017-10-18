#pragma once
#include <string>
using namespace std;

#include "Dish.h"
//extern int test;
class Pizza : public Dish
{
public:
	Pizza(string name, double price);

	string getName() override;
private:


};

