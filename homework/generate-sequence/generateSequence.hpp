#pragma once
#include <vector>

std::vector<int> generateSequence(int count, int step) {
    std::vector<int> resultVec{};
    for(size_t i = 0; i < count; ++i) {
        resultVec.push_back(step * (i + 1));
    }
    return resultVec;
}
