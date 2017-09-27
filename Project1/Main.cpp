#include"Pizza.h"
#include "MrCat.h"
#include "Soup.h"
#include "Pasta.h"
#include "Order.h"
#include <iostream>
using namespace std;

void main() 
{
	MrCat cafe;
	cafe.showMenu();

	Order newOrder(3);
	newOrder += new Pizza("QuattroFormagio");
	newOrder += new Soup("Miso");


	cout << newOrder;

	/*Dish *dishes[] = { 
		new Pizza("QuattroFormagio"),
		new Pizza("Margarita"),
		new Pizza("Havayian"),
		new Soup("Miso"),
		new Soup("CreamCheese"),
		new Pasta("Bolognese")
	};*/



	system("pause");
}