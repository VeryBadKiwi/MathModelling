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