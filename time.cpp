#include "stdafx.h"
#include "time.h"
#include <iostream>

using namespace std;

int maxMinute = 60;

void Time::setTime(long newHours,long newMinutes)
{
	hours = newHours;
	minutes = newMinutes;
}

long Time::getHours()
{
	return this->hours;
}

long Time::getMinutes()
{
	return this->minutes;
}

Time Time::operator+(Time& plusTime)
{
	Time resultPlus;
	resultPlus.hours=this->hours+plusTime.hours;
	resultPlus.minutes=this->minutes+plusTime.minutes;
	if (resultPlus.minutes >= maxMinute) {
		resultPlus.hours++;
		resultPlus.minutes -= maxMinute;
	}
	return resultPlus;
}

Time Time::operator-(Time& minusTime)
{
	Time resultMinus;
	resultMinus.hours=this->hours-minusTime.hours;
	resultMinus.minutes=this->minutes-minusTime.minutes;
	return resultMinus;
}

Time Time::operator*(int mulTimes)
{
	Time resultMul;
	resultMul.hours=this->hours*mulTimes;
	resultMul.minutes=this->minutes*mulTimes;
	return resultMul;
	while(resultMul.minutes >= maxMinute)
	{
		resultMul.minutes -= maxMinute;
		resultMul.hours++;
	}
}

void Time::print()
{
	cout<< this->hours << "hours" << this->minutes << "minutes"<<endl;
}