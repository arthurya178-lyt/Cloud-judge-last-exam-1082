#include "Teacher.h"
#include <string>
using namespace std;
Teacher::Teacher()
{

}
Teacher::Teacher(string _n, int _a, double _s)
{
	name = _n;
	age = _a;
	score = _s;
}
void Teacher::set(string _n, int _a, double _s)
{
	name = _n;
	age = _a;
	score = _s;
}
void Teacher::setName(string _n)
{
	name = _n;
}
void Teacher::setAge(int _a)
{
	age = _a;
}
void Teacher::setScore(double _s)
{
	score = _s;
}
string Teacher::getName()
{
	return name;
}
int Teacher::getAge()
{
	return age;
}
double Teacher::setScore()
{
	return score;
}