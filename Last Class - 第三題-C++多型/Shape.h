#pragma once
#include <string>
using namespace std;
class Shape
{
private:
	string color;
public:
	Shape();
	Shape(string);
	void setColor(string);
	string getColor();
	virtual string toString() = 0;
	virtual double getVolume() = 0;
};

