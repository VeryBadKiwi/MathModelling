#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Money
{
private:
	long rubley;
	unsigned char kopeek;

public:
	void set(int newRubley, int newKopek);
	long getRubley();
	long getKopeek();
	void addMoney(money& someMoney);
	void withdrawMoney(money& someMoney);
	void mulMoney(money& someMoney);
	void print();

};
