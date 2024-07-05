#include<string>
#include<iostream>
using namespace std;
class Currency {
public:
	int withJPY;
	int withdoller;
	int withEuro;
};
class Person {
public:
	string name;
	int share;
	int price;
	string money;
	string stock;
	void get(string pstock, string pname, string pmoney, int pshare, int pprice);
};