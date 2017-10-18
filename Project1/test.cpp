#include <iostream>
#include <thread>
#include <mutex>
using namespace std;

//extern int test;

class A {
public:
	int dynamicVar = 0;
	static int staticVar;
};
int A::staticVar;
void main(){
	A tester, secondTester;
	tester.dynamicVar = 1;
	secondTester.dynamicVar = 2;
	tester.staticVar = 1;
	secondTester.staticVar = 2;
	//test = 1;
	cout << "OK; " << tester.staticVar << "; " << tester.dynamicVar << endl;
	system("pause");
}