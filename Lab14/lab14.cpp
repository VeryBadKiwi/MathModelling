// lab14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

HANDLE thread[5];
int city1 = 0;
int city2 = 0;
int city3 = 0;

DWORD WINAPI city1thread(LPVOID);
DWORD WINAPI city2thread(LPVOID);
DWORD WINAPI city3thread(LPVOID);
DWORD WINAPI city4thread(LPVOID);
DWORD WINAPI city5thread(LPVOID);

int main()
{
	thread[0] = CreateThread(NULL, 0, city1thread, NULL, 0, NULL);
	thread[1] = CreateThread(NULL, 0, city2thread, NULL, 0, NULL);
	thread[2] = CreateThread(NULL, 0, city3thread, NULL, 0, NULL);
	thread[3] = CreateThread(NULL, 0, city4thread, NULL, 0, NULL);
	thread[4] = CreateThread(NULL, 0, city5thread, NULL, 0, NULL);
	DWORD wait = WaitForMultipleObjects(5,thread,true,INFINITE);
	cout << "First city has " << city1 << " votes\n";
	cout << "Second city has " << city2 << " votes\n";
	cout << "Third city has " << city3 << " votes\n";
	cout << city1 + city2 + city3;
	getchar();
	return 0;
}

DWORD WINAPI city1thread(LPVOID t)
{
	srand((unsigned int)time(0));
	for (int i=0; i<500; i++)
	{
		int golos = 4;
		golos = rand() % 3;;
		if (golos == 0)
		{
			::city1++;
		}
		if (golos == 1)
		{
			::city2++;
		}
		if (golos == 2)
		{
			::city3++;
		}
	}

	cout << "City1\n";
	return 0;
}

DWORD WINAPI city2thread(LPVOID t)
{
	srand((unsigned int)time(0));
	for (int i=0; i<500; i++)
	{
		int golos = 4;
		golos = rand() % 3;;
		if (golos == 0)
		{
			::city1++;
		}
		if (golos == 1)
		{
			::city2++;
		}
		if (golos == 2)
		{
			::city3++;
		}
	}

	cout << "City2\n";
	return 0;
}

DWORD WINAPI city3thread(LPVOID t)
{
	srand((unsigned int)time(0));
	for (int i=0; i<500; i++)
	{
		int golos = 4;
		golos = rand() % 3;
		if (golos == 0)
		{
			::city1++;
		}
		if (golos == 1)
		{
			::city2++;
		}
		if (golos == 2)
		{
			::city3++;
		}
	}

	cout << "City3\n";
	return 0;
}

DWORD WINAPI city4thread(LPVOID t)
{
	srand((unsigned int)time(0));
	for (int i=0; i<500; i++)
	{
		int golos = 4;
		golos = rand() % 3;;
		if (golos == 0)
		{
			::city1++;
		}
		if (golos == 1)
		{
			::city2++;
		}
		if (golos == 2)
		{
			::city3++;
		}
	}

	cout << "City4\n";
	return 0;
}

DWORD WINAPI city5thread(LPVOID t)
{
	srand((unsigned int)time(0));
	for (int i=0; i<500; i++)
	{
		int golos = 4;
		golos = rand()%3;
		if (golos == 0)
		{
			::city1++;
		}
		else
		if (golos == 1)
		{
			::city2++;
		}
		if (golos == 2)
		{
			::city3++;
		}
	}

	cout << "City5\n";
	return 0;
}