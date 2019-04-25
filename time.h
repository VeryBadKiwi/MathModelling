#pragma once
#include <iostream>

using namespace std;

class Time
{
public:
	void setTime(long newHours,long newMinutes);
	long getHours();
	long getMinutes();
	Time operator+(Time& plusTime);
	Time operator-(Time& minusTime);
	Time operator*(int mulTimes);
	void print();

private:
		long hours;
		long minutes;
};

