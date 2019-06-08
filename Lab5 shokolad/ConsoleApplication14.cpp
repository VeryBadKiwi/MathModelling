// ConsoleApplication14.cpp : Defines the entry point for the console application.
//


#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "chokolat.h"
#include <string>




int _tmain(int argc, _TCHAR* argv[])
{
	class chokolat x,y,z;
	x.name="Mars";
	x.weight=100;
	x.with_nuts=0;

	y.name="snickers";
	y.weight=70;
	y.with_nuts=1;

	z.name="twix";
	z.weight=110;
	z.with_nuts=0;

	cout << x.name <<" "<< x.weight<<""<<x.with_nuts;
	if (x.with_nuts==1) cout << "s oreshkami!"; else cout <<"bez oreshkov"<<"\n";

	cout << y.name <<" "<< y.weight <<" "<<y.with_nuts;
	if (x.with_nuts==1) cout << "s oreshkami!"; else cout <<"bez oreshkov"<<"\n";


	cout << z.name <<" "<< z.weight<<" "<<z.with_nuts;
	if (x.with_nuts==1) cout << "s oreshkami!"; else cout <<"bez oreshkov"<<"\n";
	
	return 0;
}

