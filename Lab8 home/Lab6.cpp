// Lab8.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <stdio.h>
#include "money.h"
#include <string>

using namespace std;

void money::set(int newRubley, int newKopeek)
{
	this->rubley = newRubley;
	this->kopeek = newKopeek;
}
long money::getRubley()
{
	return this->rubley;

}
long money::getKopeek()
{
	return this->kopeek;
}
void money::addMoney(money& someMoney)
{
	money result;
	result.rubley = this->rubley + someMoney.rubley;

	result.kopeek = this->rubley + someMoney.kopeek;
	if (result.kopeek >= 100)
	{
		result.kopeek = (result.kopeek - 100);
		result.rubley = (result.rubley + 1);
	};
}
void money::withdrawMoney(money & someMoney)
{
	money result;
	result.rubley = this->rubley - someMoney.rubley;
	int r;
	r = this->kopeek - someMoney.kopeek;
	if (r < 0)
	{
		result.kopeek = r + 100;
		result.rubley = (result.rubley - 1);
	}
	else result.kopeek = r;
}
void money::print()
{
	cout << this->getRubley() << "," << (int)this->getKopeek() << endl;
}

int main()
{

	money a, b;

	a.set(2, 5);
	b.set(2, 0);

	cout << "Summa: " << a.getRubley() + b.getRubley() << "." << a.getKopeek() + b.getKopeek() << endl;
	cout << "Raznost: " << a.getRubley() - b.getRubley() << "." << a.getKopeek() - b.getKopeek() << endl;

	a.print();
	b.print();
	system("PAUSE");
	return 0;
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
