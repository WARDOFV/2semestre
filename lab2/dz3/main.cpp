#include "Table.h"
#include <iostream>

int main() {
    Table tab(3, 4);
    
    // Заполняем несколько ячеек
    tab.set_value(0, 0, 10);
    tab.set_value(0, 2, 25);
    tab.set_value(1, 1, -3);
    tab.set_value(1, 3, 17);
    tab.set_value(2, 0, 8);
    tab.set_value(2, 3, 42);

    std::cout << "Tablica:\n";
    tab.print();

    std::cout << "\nStrok: " << tab.n_rows() 
              << ", stolbcov: " << tab.n_cols() << "\n";

    std::cout << "Znacheniye [1][3]: " << tab.get_value(1, 3) << "\n";
    std::cout << "Srednee arifmeticheskoye: " << tab.average() << "\n";

    return 0;
}
