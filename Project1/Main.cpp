#include"Pizza.h"
#include "MrCat.h"
#include "Soup.h"
#include "Pasta.h"
#include <iostream>
using namespace std;

void main() 
{
	MrCat cafe;
	cafe.showMenu();
	Dish *disches[] = { 
		new Pizza("QuattroFormagio"),
		new Pizza("Margarita"),
		new Pizza("Havayian"),
		new Soup("Miso"),
		new Soup("CreamCheese"),
		new Pasta("Bolognese")
	};

	for (auto dish : disches) {
		cout << dish->getName() << endl;
	}
	for (auto dish : disches)
		delete dish;

	system("pause");
}