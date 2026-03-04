#pragma once
#include <vector>
#include <optional>

class Stock {
private:
    struct Box {
        int w, v, id;
    };
    
    std::vector<Box> boxes;
    int next_id = 0;

    // Вспомогательный метод для поиска (убирает дублирование)
    std::optional<int> find_and_remove(
        int min_value, 
        bool by_weight  // true = по весу, false = по объёму
    );

public:
    Stock() = default;  // Конструктор по умолчанию
    
    void Add(int w, int v);
    int GetByW(int min_w);  // Возвращает -1 если не найдено
    int GetByV(int min_v);
    
    size_t Count() const { return boxes.size(); }  // Бонус: количество коробок
};
