#ifndef ZAIC_H
#define ZAIC_H

#include <string>


using namespace std;

struct Zaic {

	string name;
	string color;
	int age;
	double size;
	int earssize;

	void print() const;

};
void sortByColor(Zaic arr[], int size); //сортировка по цвету(возрастание)
void sortByEarsize(Zaic arr[], int size);// сортировка по размером ух(возрастание)
#endif 
