#include <iostream>
using namespace std;
#include "Apple.h"
istream& operator>>(istream& is, Apple& apple)
{
	int color;
	is >> color >> apple._weight;
	apple._color = static_cast<AppleColor>(color);
	return is;
};
bool operator==(Apple const& main, Apple const& apple)
{
	return main.color() == apple.color() && main.weight() == apple.weight();
};
bool operator!=(Apple const& main, Apple const& apple)
{
	return !(main == apple);
};
bool operator<(Apple const& main, Apple const& apple)
{
	if (main.weight() == apple.weight())
		return static_cast<int>(main._color) < static_cast<int>(apple._color) ? true : false;
	else
		return main.weight() < apple.weight() ? true : false;
};
bool operator<=(Apple const& main, Apple const& apple)
{
	return main < apple || main == apple;
};