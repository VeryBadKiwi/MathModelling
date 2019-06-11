// Lab7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include "mage.h"
#include "spell.h"
#include <ctime>
#include <cstdlib>

using namespace std;

void mage::init(int newhp, int newmp, string newname)
{
	hp = newhp;
	mp = newmp;
	name = newname;
}

string mage::getname()
{
	return this->name;
}

void mage::say(string text)
{
	setlocale(LC_ALL, "Russian");
	cout << this->name << " говорит " << text << endl;
}

int mage::cast(spell& spl, mage& target)
{
	if (hp > 0)
	{
		cout << this->name << " ударил своим " << spl.name << " своего врага " << target.getname() <<  endl;
		target.hit(spl);
	}
	return 0;
}

void mage::hit(spell& spl)
{
	this->hp -= spl.dhp;
	this->mp -= spl.dmp;
	if (hp <= 0)
	{
		this->say("Я умер...");
	}
	else
	{
		cout << this->name << " говорит: У меня осталось " << hp << " здоровья и " << mp << " маны." << endl;
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));

	mage vanya;
	mage boris;
	spell bolt;
	spell drain;

	bolt.name = "Арбалет";
	bolt.dhp = rand() % 25 + 10;
	bolt.dmp = 0;

	drain.name = "Истощение";
	drain.dhp = rand() % 10;
	drain.dmp = rand() % 25 + 10;

	vanya.init(100, 50, "Ваня");
	vanya.say("Это будет славная битва!");

	boris.init(75, 100, "Борис");
	boris.say("Победителем выйдет только один из нас!");

	for (int i = 0; i < 8; i++)
	{
		boris.cast(drain, vanya);
		vanya.cast(bolt, boris);
	}
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
