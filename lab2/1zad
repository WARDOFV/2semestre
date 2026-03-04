#include <iostream>
using namespace std;

struct Bell {
    bool isDing = true;  // понятное имя вместо b
    
    void sound() {
        if (isDing) {
            cout << "ding\n";
        } else {
            cout << "dong\n";
        }
        isDing = !isDing;  // переключаем состояние после вывода
    }
};

int main() {
    Bell soudbell;
    soudbell.sound(); // ding
    soudbell.sound(); // dong
    soudbell.sound(); // ding
}
