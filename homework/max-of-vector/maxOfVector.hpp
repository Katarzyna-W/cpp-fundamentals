#pragma once
#include <algorithm>
#include <limits>
#include <vector>

int maxOfVector(const std::vector<int>& vec) {
    auto max_elem = *std::max_element(vec.begin(), vec.end());
    return max_elem;
}
