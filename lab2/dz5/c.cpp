#include "Stock.h"
#include <iostream>

int main() {
    Stock sklad;

    sklad.Add(10, 20);
    sklad.Add(5, 30);
    sklad.Add(10, 25);
    sklad.Add(15, 10);

    std::cout << "Korobok na sklade: " << sklad.Count() << "\n\n";

    std::cout << "Gruzovaya (≥6kg): ";
    std::cout << sklad.GetByW(6) << "\n";

    std::cout << "Eshe (≥6kg): ";
    std::cout << sklad.GetByW(6) << "\n";

    std::cout << "Eshe (≥6kg): ";
    std::cout << sklad.GetByW(6) << "\n";

    std::cout << "\nObemnaya (≥15L): ";
    std::cout << sklad.GetByV(15) << "\n";

    std::cout << "Tolko (≥5L): ";
    std::cout << sklad.GetByV(5) << "\n";

    std::cout << "\nOstalos: " << sklad.Count() << " korobok\n";

    return 0;
}
