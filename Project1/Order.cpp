#include "Order.h"
#include <iostream>



void Order::operator+=(Dish * item)
{
	addItem(item);
}

void Order::addItem(Dish * item)
{
	dishes.push_back(item);
}

double Order::Price()
{
	double p = 0;
	for (auto dish : dishes)
		p += dish->getPrice();
	return p;
}

int Order::getCookingTime()
{
	int maxDishTime = 0;
	for (auto dish : dishes)
		if (maxDishTime < dish->getCookingTime())
			maxDishTime = dish->getCookingTime();
	return maxDishTime;
}

Order::Order(int tableId)
{
	this->tableId = tableId;
}

void Order::print()
{
	cout << "Order for table #" << tableId << "\n ";
	for (auto dish : dishes)
		cout <<  "\t" << dish->getName() << "\n ";
}

ostream & operator<<(ostream & stream, Order order)
{

	stream << "Order for table #" << order.tableId << "\n ";
	for (auto dish : order.dishes)
		stream << "\t" << dish->getName() << "\n ";
	stream << "Total: " << order.Price() << "\n";
	stream << "Service fee: " << order.Price() / 10 << "\n";
	return stream;
}
