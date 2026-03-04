#pragma once
#include <iostream>

class Complex {
private:
    double re, im;

public:
    // Конструкторы
    Complex(double x = 0.0, double y = 0.0) : re(x), im(y) {}

    // Геттеры (inline, коротко)
    double Re() const { return re; }
    double Im() const { return im; }

    // Сеттеры
    void Re(double x) { re = x; }
    void Im(double y) { im = y; }

    // Свойства
    double Abs() const;
    double Arg() const;

    // Вывод
    void Print() const;
    void TrigPrint() const;
    void ExpPrint() const;

    // Операторы (дружественные функции для симметрии)
    Complex operator+(const Complex& z) const;
    Complex operator-(const Complex& z) const;
    Complex operator*(const Complex& z) const;
    Complex operator/(const Complex& z) const;

    // Для удобного вывода через cout << z
    friend std::ostream& operator<<(std::ostream& os, const Complex& z);
};
