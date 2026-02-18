#include <iostream>
#include <fstream>
#include <string>
#include "../Zaic.h"
using namespace std;

int main() {
    ifstream file("data.txt");
    if (!file) {
        cerr << "Error: cannot open file data.txt" << endl;
        return 1;
    }

    // Подсчёт количества записей
    int count = 0;
    string line;
    while (getline(file, line)) {
        if (!line.empty()) count++;
    }
    file.clear();
    file.seekg(0, ios::beg);

    // Создание массива
    Zaic* arr = new Zaic[count];

    // Чтение данных
    for (int i = 0; i < count; ++i) {
        file >> arr[i].name >> arr[i].color >> arr[i].age >> arr[i].size >> arr[i].earssize;
    }
    file.close();

    // Вывод исходного массива
    cout << "Original array:" << endl;
    for (int i = 0; i < count; ++i) {
        arr[i].print();
    }

    // Сортировка по цвету
    sortByColor(arr, count);
    cout << "\nSorted by color:" << endl;
    for (int i = 0; i < count; ++i) {
        arr[i].print();
    }

    // Сортировка по размеру ушей
    sortByEarsize(arr, count);
    cout << "\nSorted by ear size:" << endl;
    for (int i = 0; i < count; ++i) {
        arr[i].print();
    }

    delete[] arr;
    return 0;
}
