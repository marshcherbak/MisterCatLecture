#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

//extern int test;
class Base {
public:
	Base(int initDyne):dyna(initDyne)
	{

	}
protected:
	int dyna;
};
class A : public Base{
public:
	A(const A &a): Base(a.dyna), base(a.base) 
	{
		cout << "!!!!!!!!!!! Copying A!\n";
	}
	A& operator=(A&a) {
		
		dyna = a.dyna;
		cout << "Assigning A !!!!!!!!!" << endl;
		return *this;
	}
	A(int initBase):Base(33), base(initBase)
	{ }

	A():Base(11), base(12) 
	{ } 
	int getDynamicVar() { return dyna; }
	void setDynamicVar(int newValue) { dyna = newValue; }

	static int staticVar;
	const int base;
	static const int staticBase;
private: 

};							
int A::staticVar;

void printA(char *name, A &obj) {
	cout << name << endl;
	cout << " Dynamic: " << obj.getDynamicVar()
		<< "; Base: " << obj.base
		<< "; Static: " << obj.staticVar
		<< endl;
}
A &modifyA(const A &obj){
	A tmp(obj);
	tmp.setDynamicVar(99);
	return tmp;
}
void main(){
	int tmpVar = 2;
	A tester(3), secondTester;
	tester.setDynamicVar(tester.getDynamicVar() + 1);
	tester.staticVar = 1;
	secondTester.staticVar = 2;

	tester = modifyA(tester);
	//A thirdTester(tester);
	printA("The first tester: ", tester);
	//printA("The third tester: ", thirdTester);
	system("pause");
}