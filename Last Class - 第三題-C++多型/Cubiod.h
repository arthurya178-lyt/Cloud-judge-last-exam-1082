#pragma once
#include <string>
#include "Shape.h"
using namespace std;
class Cubiod : public Shape
{
private:
	double length, width, height;
public:
	Cubiod();
	Cubiod(double, double, double,string);
	double getLength();
	double getWidth();
	double getHeight();
	void setLength(double);
	void setWidth(double);
	void setHeight(double);
	double getVolume();
	string toString();
};

