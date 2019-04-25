// LAB9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "time.h"
#include <iostream>

using namespace std;

int main()
{
	Time a,b,plus,minus,mul;
	int valueMul = 3;
	a.setTime(2,30);
	b.setTime(2,30);

	plus=a+b;
	minus=a-b;
	mul=a*valueMul;

	plus.print();
	minus.print();
	mul.print();
}