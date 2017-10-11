#include"Pizza.h"
#include "MrCat.h"
#include "Soup.h"
#include "Pasta.h"
#include "Order.h"
#include <iostream>
#include <mutex>
#include <thread>
using namespace std;

std::mutex itemslock;
vector<int> items = { 1,2,3,4,5,6,6 };

void addThread() {
	int i = 0;
	while (i < 50000000) {
		itemslock.lock();
		items.push_back(i*i);
		itemslock.unlock();
		//this_thread::sleep_for(0.00000001s);
		i++;
	}
}
void removeThread() {
	int i = 0;
	while (i < 50000000) {
		itemslock.lock();
		for (int k = 0; k < 100; k++) {
			if (items.size() > 0)
				items.pop_back();
		}


		//this_thread::sleep_for(0.00000001s);
		itemslock.unlock();
		i++;
	}
}

void testsets() {

	thread workers[] = { thread(addThread),  thread(addThread), thread(addThread),   thread(removeThread), thread(removeThread) }; //як параметр конструктора передаємо вказівник на функцію 
																																   //запустить на виконання паралельно з мейн
	int k = 0;
	while (k < 500) {
		cout << items.size() << endl;
		this_thread::sleep_for(1s);
		k++;
	}
	for (int j = 0; j < 3; j++)
		workers[j].join();


	cout << "\n All threads 1 finished!" << endl;

	//буде чекати, поки не закінчиться цей потік 
}
//============================================================
//============================================================

void main() 
{
	int tableNum = 3;
	MrCat cafe;
	cafe.showMenu();

	Order newOrder(tableNum);

	char c = -1;
	while (c != '0') {
		Dish *newDish = nullptr;
		cin >> c;
		switch (c) {
		case '1':
			newDish = new Pizza("QuadroFormagio");
			break;
		case '2':
			newDish = new Soup("Miso");
			break;
		case '3':newDish = new Pasta("Passssta");
			break;
		default:
			break;
		}
		if (newDish != nullptr) {
			newOrder += newDish;
			cout << newDish->getName() << " added to order.\n";
		}
	}
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