#pragma once
#include <string>

using namespace std;

class idCard
{
private:
	int number;
	string dateExpire;
public:
	void setNumber(int newNumber);
	int getNumber();
	void setDateExpire(string newDateExpire);
	string getDateExpire();
	void print();
};

