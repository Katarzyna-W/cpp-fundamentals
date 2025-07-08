#pragma once
#include <vector>

int addEven(const std::vector<int>& numbers) {
    int sum = 0;
    for (auto elem : numbers) {
        if (elem % 2 == 0) {
            sum += elem;
        }
    }
    return sum;
}
