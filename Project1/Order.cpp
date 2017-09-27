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
	return stream;
}
