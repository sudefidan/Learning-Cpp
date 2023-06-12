#include <iostream>
#include "heartrates.h"
using namespace std;

HeartRates::HeartRates()
{
	day = 0;
	month = 0;
	year = 0;
	name = "-";
	surname = "-";
}
HeartRates::HeartRates(string n, string s, int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
	name = n;
	surname = s;
}
void HeartRates::setName(string n)
{
	name = n;
}

void HeartRates::setSurname(string s)
{
	surname = s;
}
void HeartRates::setDay(int d)
{
	day = d;
}

void HeartRates::setMonth(int m)
{
	month = m;
}

void HeartRates::setYear(int y)
{
	year = y;
}

string HeartRates::getName()
{
	return name;
}
string HeartRates::getSurame()
{
	return surname;
}
int HeartRates::getYear()
{
	return year;
}
int HeartRates::getDay()
{
	return day;
}
int HeartRates::getMonth()
{
	return month;
}

int HeartRates::age(HeartRates obj)
{
	int age;
	age = 2021 - obj.getYear();

	return age;
}

int HeartRates::MaximumHeartRate(HeartRates obj)
{
	int max;
	max = 220 - age(obj);

	return max;
}
int HeartRates::targetmin(HeartRates obj)
{
	int min;
	min = MaximumHeartRate(obj) * 50 / 100;
	return min;
}
int HeartRates::targetmax(HeartRates obj)
{
	int max;
	max = MaximumHeartRate(obj) * 85 / 100;
	return max;
}