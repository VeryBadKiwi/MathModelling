// Lab8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Department.h"
#include "Employee.h"
#include "idCard.h"

using namespace std;

void Department::setName(std::string newName)
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

void Employee::setName(std::string newName)
{
	name=newName;
}

string Employee::getName()
{
	return this->name;
}

void Employee::setPosition(std::string newPosition)
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
	cout << "Name: " << name << endl;
	cout << "Position: " << position << endl;
	cout << "Room: " << room << endl;
	cout << "IdCard: " << this->card->getNumber() << endl;
	cout << "Department: " << this->department->getName() << endl;
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
	Department dptAdm;
	Department dptDev;

	Employee headDep, mainDev, dev, director, subDirector, mainAccountant;
	idCard headDep101, mainDev5016, devId5018, director201, subDirector201, mainAccountant202;

	dptDev.setName("Developers");
	dptAdm.setName("Administration");

	headDep101.setNumber(101);
	mainDev5016.setNumber(5016);
	devId5018.setNumber(5018);
	director201.setNumber(201);
	subDirector201.setNumber(5022);
	mainAccountant202.setNumber(5019);

	headDep.setName("Ivan Ivanovich Ivanov");;
	headDep.setPosition("1");
	headDep.setRoom(101);
	headDep.setIdCard(&headDep101);
	headDep.setDepartment(&dptDev);
	dptDev.setHead(&headDep);

	mainDev.setName("Sergeev Sergei Sergeevich");;
	mainDev.setPosition("2");
	mainDev.setRoom(102);
	mainDev.setIdCard(&mainDev5016);
	mainDev.setDepartment(&dptDev);
	dptDev.setHead(&mainDev);

	dev.setName("Sidorov Sidor Sidorovich");
	dev.setPosition("3");
	dev.setRoom(102);
	dev.setIdCard(&devId5018);
	dev.setDepartment(&dptDev);
	dptDev.setHead(&dev);

	director.setName("Mikhailov Mikhail Mikhailovich");
	director.setPosition("4");
	director.setRoom(201);
	director.setIdCard(&director201);
	director.setDepartment(&dptAdm);
	dptAdm.setHead(&director);

	subDirector.setName("Alexandrovna Alexandra Alexandrovna");
	subDirector.setPosition("5");
	subDirector.setRoom(201);
	subDirector.setIdCard(&subDirector201);
	subDirector.setDepartment(&dptAdm);
	dptAdm.setHead(&subDirector);

	mainAccountant.setName("Evgenevna Evgenia Evgeneva");
	mainAccountant.setPosition("6");
	mainAccountant.setRoom(202);
	mainAccountant.setIdCard(&mainAccountant202);
	mainAccountant.setDepartment(&dptAdm);
	dptAdm.setHead(&mainAccountant);

	headDep.print();
	mainDev.print();
	dev.print();

	director.print();
	subDirector.print();
	mainAccountant.print();
}