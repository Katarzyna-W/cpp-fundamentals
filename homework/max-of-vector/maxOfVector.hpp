#pragma once
#include <limits>
#include <vector>
#include <algorithm>

int maxOfVector(const std::vector<int>& vec) {
    auto max_elem = *std::max_element(vec.begin(), vec.end());
    return max_elem;
}
