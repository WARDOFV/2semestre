#include "Complex.h"
#include <iostream>

int main() {
    Complex z1{3, 4}, z2{1, -2};  // uniform initialization

    std::cout << "z1 = " << z1 << "\n"
              << "z2 = " << z2 << "\n\n";

    std::cout << "|z1| = " << z1.Abs() << "\n"
              << "arg(z1) = " << z1.Arg() << " rad\n\n";

    std::cout << "Trig. form z1: "; z1.TrigPrint();
    std::cout << "Exp. form z1:  "; z1.ExpPrint();

    std::cout << "\nz1 + z2 = " << (z1 + z2) << "\n"
              << "z1 - z2 = " << (z1 - z2) << "\n"
              << "z1 * z2 = " << (z1 * z2) << "\n"
              << "z1 / z2 = " << (z1 / z2) << "\n";

    // Сеттеры в новом стиле
    z1.Re(5);
    z1.Im(-1);
    std::cout << "\nNew z1 = " << z1 << "\n";

    return 0;
}
