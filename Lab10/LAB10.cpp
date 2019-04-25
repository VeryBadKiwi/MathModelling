// LAB10.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "time.h"
#include <iostream>

using namespace std;

int main()
{
	Time temp;
	Time arr[10];

	for (int i=0; i<10; i++)
	{
		arr[i].setTime(rand() % 23 +1 ,rand() % 59 +0);
	}
	for(int i=1;i<10-1;i++)
	{
		for(int j=0;j<10-i-1;j++)
		{
			if (arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}

	for (int i=0;i<10;i++)
	{
		arr[i].print();
	}

	Time a,b,plus,minus,mul;
	int valueMul = 3;
	a.setTime(2,40);
	b.setTime(2,30);

	plus=a+b;
	minus=a-b;
	mul=a*valueMul;

	plus.print();
	minus.print();
	mul.print();

	if (a>b)
	{
		cout << ">" << endl;
	}
	if (a<b)
	{
		cout << "<" << endl;
	};
	if (a==b)
	{
		cout << "=" << endl;
	}

	getchar();
}