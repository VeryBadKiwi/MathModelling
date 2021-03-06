﻿// Lab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "stdafx.h"
#include "read_complex.h"

int main()
{
	complex a[5];
	for (int i = 0; i < 5; i++)
	{
		read_complex(a[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		write_complex(a[i], i + 1);
	}

	complex temp;
	for (int i = 5 - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if (sqr(a[j]) > sqr(a[j + 1]))
			{
				temp = (a[j]);
				(a[j]) = (a[j + 1]);
				(a[j + 1]) = temp;
			}
		}
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%f", (sqr(a[i])));
		printf("\n");
	}

	system("pause");
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
