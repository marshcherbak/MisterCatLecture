#include"Pizza.h"
#include "MrCat.h"
#include "Soup.h"
#include "Pasta.h"
#include "Order.h"
#include <iostream>

#include <thread>
using namespace std;


void testThread() {
	while (true) {
		int i = 5;
		double a = 4;
		while (2000000000) {
			i += a*a;
			a -= 1;
		}
		cout << ".";
		this_thread::sleep_for(3s);
	}
}
void main() 
{
	
	thread t1(testThread); //як параметр конструктора передаємо вказівник на функцію 
	//запустить на виконання паралельно з мейн
	thread t2(testThread);
	thread t3(testThread);
	
	while (true) {
		int i = 5;
		double a = 4;
		while (i<2000000000) {
			i += a*a;
			a -= 1;
		}
		cout << "*";
		this_thread::sleep_for(2s);
	}
	t1.join();
	cout << "\n Thread 1 finished!" << endl;
	t2.join();
	t3.join();
	//буде чекати, поки не закінчиться цей потік 
	return;
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