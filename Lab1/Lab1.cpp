// Lab1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"
#include "iostream"
#include "stdlib.h" 

struct complex
{
	double x;
	double y;
};

void read_complex(struct complex& a)
{
	scanf_s("%lf", &(a).x);
	scanf_s("%lf", &(a).y);
}
void write_complex(struct complex& a, int i)
{


}
double sqr(struct complex& a)
{
	double sum;
	sum = (a).y * (a).y + (a).x * (a).x;
	return sum;
}

int _tmain()
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