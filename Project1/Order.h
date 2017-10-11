#pragma once
#include <vector>
using namespace std;

#include "Dish.h"

class Order
{
public:

	void operator +=(Dish * item);
	void addItem(Dish * item);

	double Price();

	int getCookingTime();
	Order(int tableId);

	void print();

	friend ostream& operator << (ostream& stream, Order order);
private:
	vector<Dish *> dishes;
	int tableId;

};

