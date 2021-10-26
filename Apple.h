#pragma once
#include <iostream>
using namespace std;
enum class AppleColor { green=0, yellow, red };
class Apple
{
private:
	AppleColor _color;
	double _weight;
public:
	Apple(AppleColor color=AppleColor::green, double weight=0.2) :_color(color), _weight(weight) {};
	AppleColor color()const{return _color; };
	double weight()const { return _weight; };
	friend istream& operator>>(istream& is, Apple& apple);
	friend bool operator==(Apple const& main, Apple const& apple);
	friend bool operator!=(Apple const& main, Apple const& apple);
	Apple& operator++()
	{
		if (!(static_cast<int>(_color) == 2))
			_color = static_cast<AppleColor>(static_cast<int>(_color) + 1);
		return *this;
	}
	Apple& operator++(int)
	{
		Apple a = *this;
		++*this;
		return a;
	}
	friend bool operator<(Apple const& main, Apple const& apple);
	friend bool operator<=(Apple const& main, Apple const& apple);
};