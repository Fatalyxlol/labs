#include "date.h"
#include <iostream>
using namespace std;

bool isLeapYear(int year)
{
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
				return true;
			else 
				return false;
		}
		else 
			return true;
	}
	else 
		return true;
}
int SecondsInMinute()
{
	return 60;
}
void LaterInYear(int d1, int m1, int d2, int m2)
{
	if (m2 > m1)
		cout << "Вторая дата ближе" << endl;
	if(m2 <m1)
		cout << "Первая  дата ближе" << endl;
	else {
		if (d2 > d1)
			cout << "Вторая дата ближе" << endl;
		else
			cout << "Первая  дата ближе" << endl;
	}
}
int SecInHour(int hour)
{
	return hour * 60;
}
bool Apokl(int year)
{
	return year == 1992 || year == 2005 || year == 2011;
}