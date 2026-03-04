#include "Table.h"
#include <iostream>
#include <numeric>  // для std::accumulate

Table::Table(int r, int c) 
    : rows(r), cols(c), data(r, std::vector<int>(c, 0)) {}

int Table::get_value(int row, int col) const {
    return data[row][col];
}

void Table::set_value(int row, int col, int val) {
    data[row][col] = val;
}

void Table::print() const {
    for (const auto& row : data) {
        for (int val : row)
            std::cout << val << " ";
        std::cout << "\n";
    }
}

double Table::average() const {
    if (rows == 0 || cols == 0) return 0.0;
    
    double sum = 0;
    for (const auto& row : data)
        for (int val : row)
            sum += val;
    
    return sum / (rows * cols);
}
