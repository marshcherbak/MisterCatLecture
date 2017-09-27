#pragma once
#include <string>
using namespace std;
class Dish
{

public:
	Dish(string name);
	virtual string getName();
protected:
	int cookingTime;
	string name;
};

