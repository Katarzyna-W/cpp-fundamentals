#include <iostream>
#include <string>
#include "vectorFunctions.hpp"

std::vector<std::shared_ptr<int>> generate(int count) {
    std::vector<std::shared_ptr<int>> vec {};
    for (size_t i = 0; i < count; i++){
        std::shared_ptr<int> sp1 = std::make_shared<int>(i);
        vec.push_back(sp1);
    }
    return vec;
  
}
void print(std::vector<std::shared_ptr<int>> vec) {
    for (std::shared_ptr<int> elem : vec) {
        std::cout << *elem << "\n";
    }
}

void add10(std::vector<std::shared_ptr<int>> vec) {
    if (vec) {
        for (std::shared_ptr<int> elem : vec) {
            *elem += 10;
        }
    }
}
void sub10(int *ptr) {
    if (ptr) {
        *ptr -= 10;
    }
}
void sub10(std::vector<std::shared_ptr<int>> vec) {
    if (vec) {
        for (auto elem : vec) {
            sub10(elem.get());
        }
    }
}
