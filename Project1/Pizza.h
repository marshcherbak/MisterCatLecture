#pragma once
#include <string>
using namespace std;

#include "Dish.h"
class Pizza : public Dish
{
public:
	Pizza(string name);
	string getName() override;
private:


};

