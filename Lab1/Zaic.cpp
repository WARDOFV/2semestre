#include "Zaic.h"
#include <iostream>
#include <string>

using namespace std;

void Zaic::print() const {
	cout << name << " " << color << " " << age << " " << size << " " << earssize << " "<<endl;
}
void sortByColor(Zaic arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].color > arr[j + 1].color) { // сравнение строк (лексикографически)
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void sortByEarsize(Zaic arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j].earssize > arr[j + 1].earssize) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
