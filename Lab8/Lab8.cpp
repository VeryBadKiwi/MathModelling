// Lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "idCard.h"

using namespace std;

void Department::setName(string newName)
{
	name=newName;
}

std::string Department::getName()
{
	return this->name;
}

void Department::setHead(Employee* newHead)
{
	head=newHead;
}

void Department::print()
{

}

void Employee::setName(string newName)
{
	name=newName;
}

string Employee::getName()
{
	return this->name;
}

void Employee::setPosition(string newPosition)
{
	position = newPosition;
}

std::string Employee::getPositon()
{
	return this->position;
}

void Employee::setIdCard(idCard* newIdCard)
{
	card=newIdCard;
}

idCard* Employee::getIdCard()
{
	return this->card;
}

void Employee::setRoom(int newRoom)
{
	room=newRoom;
}

int Employee::getRoom()
{
	return this->room;
}

void Employee::setDepartment(Department* newDepartment)
{
	department=newDepartment;
}

Department* Employee::getDepartment()
{
	return this->department;
}

void Employee::print()
{
	setlocale(LC_ALL, "Russian");

	cout << "#: " << position << endl;
	cout << "Имя: " << name << endl;
	cout << "Комната: " << room << endl;
	cout << "Карта: " << this->card->getNumber() << endl;
	cout << "Отдел: " << this->department->getName() << endl;
}

void idCard::setNumber(int newNumber)
{
	number = newNumber;
}

int idCard::getNumber()
{
	return this->number;
}

void idCard::setDateExpire(std::string newDateExpire)
{
	dateExpire = newDateExpire;
}

std::string idCard::getDateExpire()
{
	return this->dateExpire;
}

void idCard::print()
{

}


void main()
{
	setlocale(LC_ALL, "Russian");
	Department depAdm;
	Department depBuh;
	Department depKadr;

	Employee glavBuh, Buh, director, mainAccountant, accountant;
	idCard glavBuh4124, Buh62, director2321, mainAccountant224, accountant2345;

	depAdm.setName("Администрация");
	depBuh.setName("Бухгалтерия");
	depKadr.setName("Отдел кадров");

	glavBuh4124.setNumber(4124);
	Buh62.setNumber(62);
	director2321.setNumber(2321);
	mainAccountant224.setNumber(224);
	accountant2345.setNumber(2345);

	glavBuh.setPosition("1");
	glavBuh.setName("Иван Иванович Иванов");
	glavBuh.setRoom(313);
	glavBuh.setIdCard(&glavBuh4124);
	glavBuh.setDepartment(&depBuh);
	depBuh.setHead(&glavBuh);

	Buh.setPosition("2");
	Buh.setName("Алексеев Алексей Алексеевич");
	Buh.setRoom(21);
	Buh.setIdCard(&Buh62);
	Buh.setDepartment(&depBuh);
	depBuh.setHead(&Buh);

	Buh.setPosition("3");
	Buh.setName("Михайлов Михаил Михайлович");
	Buh.setRoom(613);
	Buh.setIdCard(&Buh62);
	Buh.setDepartment(&depBuh);
	depBuh.setHead(&Buh);

	director.setPosition("4");
	director.setName("Александрова Александра Александровна");
	director.setRoom(423);
	director.setIdCard(&director2321);
	director.setDepartment(&depAdm);
	depAdm.setHead(&director);

	mainAccountant.setPosition("5");
	mainAccountant.setName("Дмитриев Дмитрий Дмитриевич");
	mainAccountant.setRoom(756);
	mainAccountant.setIdCard(&accountant2345);
	mainAccountant.setDepartment(&depKadr);
	depKadr.setHead(&mainAccountant);

	accountant.setPosition("6");
	accountant.setName("Евгейниев Евгений Евгениевич");
	accountant.setRoom(535);
	accountant.setIdCard(&accountant2345);
	accountant.setDepartment(&depKadr);
	depKadr.setHead(&accountant);

	glavBuh.print();
	Buh.print();
	director.print();
	mainAccountant.print();
	accountant.print();
}