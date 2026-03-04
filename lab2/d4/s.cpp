#include "Complex.h"
#include <cmath>
#include <iomanip>

double Complex::Abs() const {
    return std::sqrt(re * re + im * im);
}

double Complex::Arg() const {
    return std::atan2(im, re);
}

void Complex::Print() const {
    std::cout << re;
    if (im >= 0) std::cout << " + " << im << "i";
    else std::cout << " - " << std::abs(im) << "i";
}

// Перегрузка << для удобного вывода
std::ostream& operator<<(std::ostream& os, const Complex& z) {
    os << z.re;
    if (z.im >= 0) os << " + " << z.im << "i";
    else os << " - " << std::abs(z.im) << "i";
    return os;
}

void Complex::TrigPrint() const {
    double r = Abs(), phi = Arg();
    std::cout << std::fixed << std::setprecision(3);
    std::cout << r << " * (cos(" << phi << ") + i*sin(" << phi << "))\n";
}

void Complex::ExpPrint() const {
    double r = Abs(), phi = Arg();
    std::cout << std::fixed << std::setprecision(3);
    std::cout << r << " * exp(i*" << phi << ")\n";
}

// Операторы — теперь можно писать z1 + z2 вместо z1.Add(z2)
Complex Complex::operator+(const Complex& z) const {
    return {re + z.re, im + z.im};
}

Complex Complex::operator-(const Complex& z) const {
    return {re - z.re, im - z.im};
}

Complex Complex::operator*(const Complex& z) const {
    return {re * z.re - im * z.im, re * z.im + im * z.re};
}

Complex Complex::operator/(const Complex& z) const {
    double denom = z.re * z.re + z.im * z.im;
    return {(re * z.re + im * z.im) / denom, (im * z.re - re * z.im) / denom};
}
