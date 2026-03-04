#pragma once
#include <vector>

class Table {
private:
    std::vector<std::vector<int>> data;
    int rows, cols;

public:
    Table(int r, int c);
    
    int get_value(int row, int col) const;
    void set_value(int row, int col, int val);
    
    int n_rows() const { return rows; }  // inline — коротко и удобно
    int n_cols() const { return cols; }
    
    void print() const;
    double average() const;
};
