#include"Head.h"
using namespace std;
Person person[10];
Currency CNY;
int a, b, c;//交易数量，汇率行数，提问个数
string psort[4] = { "CNY","JPY","doller","Euro" };
int Question1(string question,string name, string sort){
		int j;
		for (j = 0; j < a; j++) {
			if (name == person[j].name) {
				break;
			}
		}
		if (person[j].money == "CNY")
			return person[j].price * person[j].share;
		else if (person[j].money == "doller")
			return person[j].price * person[j].share;
	}
		
int Question2(string question, string stock, string sort) {
	int sum = 0;
	for (int i = 0; i < a; i++) {
		if (person[i].money != sort) {
			if (person[i].money == "JPY")
				sum += person[i].price * person[i].share / CNY.withJPY;
		}
		else
			sum += person[i].price * person[i].share;
		
	}
	return sum;
}
bool test01() {
	a = 2;
	person[0].get("A", "ZhangSan", "CNY", 1000, 25);
	person[1].get("A", "LiSi", "JPY", 2200, 100);
	b = 1;
	CNY.withJPY = 22;
	c = 2;
	if (Question1("PERSON", "ZhangSan", "CNY") == 25000 && Question2("STOCK", "A", "CNY") == 35000) {
		cout << Question1("PERSON", "ZhangSan", "CNY") << endl;
		cout<<Question2("STOCK", "A", "CNY")<< endl;
		return true;
	}
	else
		return false;
	
}
bool test02() {
	a = 1;
	person[0].get("A", "WangWU", "doller", 14, 10);
	b = 1;
	CNY.withdoller = 1;
	c = 1;
	if (Question1("PERSON", "WangWU", "doller") == 140) {
		cout << Question1("PERSON", "WangWU", "doller") << endl;
		return true;
	}
	else
		return false;
}
int main(){
	cout << "test01:" << endl;
	if (test01())
		cout << true << endl;
	else
		cout << false;
	cout << "test02:" << endl;
	if (test02())
		cout << true << endl;
	else
		cout << false;
}
