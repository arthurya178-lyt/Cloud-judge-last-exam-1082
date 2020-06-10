#include "Cubiod.h"

Cubiod::Cubiod(double _l,double _w,double _h, string _c)
{
	length = _l;
	width = _w;
	height = _h;
	setColor(_c);
}
double Cubiod::getLength()
{
	return length;
}
double Cubiod::getWidth()
{
	return width;
}
double Cubiod::getHeight()
{
	return height;
}
void Cubiod::setLength(double _l)
{
	length = _l;
}
void Cubiod::setWidth(double _w)
{
	width = _w;
}
void Cubiod::setHeight(double _h)
{
	height = _h;
}
double Cubiod::getVolume()
{
	return length * width * height;
}
string Cubiod::toString()
{
	return "Cubiod";
}