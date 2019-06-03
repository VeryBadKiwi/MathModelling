#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class money
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
	bool operator< (money& someMoney);
	bool operator> (money& someMoney);
	bool operator<= (money& someMoney);
	bool operator>= (money& someMoney);
	bool operator== (money& someMoney);
	bool operator!= (money& someMoney);
};
