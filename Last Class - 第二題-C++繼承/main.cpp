#include <iostream>
#include <iomanip>
#include <string>
//class
#include "Cubiod.h"
#include "Sphere.h"
#include "Shape.h"
int main()
{
	//setting
	string Color1, Color2;
	double radius, length, width, height;
	//input value
	cin >> radius >> Color1;
	cin >> length >> width >> height >> Color2;
	
	//creat obj sphere and cubiod
	Sphere sphere(radius, Color1);
	Cubiod cubiod(length, width, height, Color2);

	// output

	//cout Sphere obj
	cout << sphere.toString() << ":(" << sphere.getRadius() << ")," << fixed << setprecision(1) << sphere.getVolume() << "," 
		<< sphere.getColor() << endl;

	cout << fixed << setprecision(0);
	//cout cubiod obj
	cout << cubiod.toString() << ":(" << cubiod.getLength() << "," << cubiod.getWidth() << "," << cubiod.getHeight()
		<< ")," << fixed << setprecision(1) << cubiod.getVolume() << "," << cubiod.getColor() << endl;
}