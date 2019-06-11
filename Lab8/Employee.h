class Employee;
#pragma once;
#include <string>
#include "idCard.h"
#include "Department.h"

using namespace std;

class Employee
{
private:
	string name;
	string position;
	idCard* card;
	int room;
	Department* department;
public:
	void setName(string newName);
	string getName();
	void setPosition(string newPosition);
	string getPositon();
	void setIdCard(idCard* newIdCard);
	idCard* getIdCard();
	void setRoom(int newRoom);
	int getRoom();
	void setDepartment(Department *newDepartment);
	Department* getDepartment();
	void print();
};

