#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include "Teacher.h"
using namespace std;

int main()
{
	//write
	{
		Teacher teacher[4];
		fstream file;
		file.open("info.txt", ios::out);
		//input data format::(string,int,double) * 4time
		for (int i = 0; i < 4; i++)
		{
			string name;
			int age;
			double score;

			cin >> name >> age >> score;
			teacher[i].set(name, age, score);	 //set all variable
		}
		for (int i = 0; i < 4; i++)
		{
			file << teacher[i].getName() <<" " << teacher[i].getAge() << " " <<fixed<< setprecision(1)<<teacher[i].setScore() << endl;
		}
		file.close();
	}

	//load
	{
		fstream file;
		file.open("info.txt", ios::in);
		const int bufferSize = 200;
		char buffer[bufferSize];
		do
		{
			file.getline(buffer, bufferSize);
			cout << buffer << endl;
		} while (!(file.eof()));
		file.close();
	}
}