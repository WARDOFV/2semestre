#include "Stock.h"
#include <algorithm>
#include <limits>

void Stock::Add(int w, int v) {
    boxes.push_back({w, v, next_id++});
}

std::optional<int> Stock::find_and_remove(int min_value, bool by_weight) {
    int best_val = std::numeric_limits<int>::max();
    int best_id = -1;
    size_t best_idx = std::string::npos;  // -1 для size_t

    for (size_t i = 0; i < boxes.size(); ++i) {
        int current = by_weight ? boxes[i].w : boxes[i].v;
        
        if (current >= min_value) {
            // Ищем минимальное подходящее значение
            if (current < best_val || 
                (current == best_val && boxes[i].id > best_id)) {
                best_val = current;
                best_id = boxes[i].id;
                best_idx = i;
            }
        }
    }

    if (best_idx == std::string::npos) {
        return std::nullopt;  // Ничего не найдено
    }

    int result = boxes[best_idx].id;
    boxes.erase(boxes.begin() + best_idx);
    return result;
}

int Stock::GetByW(int min_w) {
    auto result = find_and_remove(min_w, true);
    return result.value_or(-1);  // -1 если не найдено
}

int Stock::GetByV(int min_v) {
    auto result = find_and_remove(min_v, false);
    return result.value_or(-1);
}
