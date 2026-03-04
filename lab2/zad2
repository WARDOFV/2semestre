#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> input = {5, 1, 10, 2, 3, 8};
    vector<int> even, odd;

    // Автоматическое распределение
    for (int n : input) {
        (n % 2 == 0 ? even : odd).push_back(n);
    }

    cout << "Chet: ";
    for (int n : even) cout << n << " ";
    
    cout << "\nNe chet: ";
    for (int n : odd) cout << n << " ";
    cout << endl;

    return 0;
}
