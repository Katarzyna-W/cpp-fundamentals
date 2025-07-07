#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else if (sequence == 2) {
        return 1;
    }
    int next{};
    int prev1 = 0;
    int prev2 = 1;
    for (std::size_t i = 1; i < sequence; ++i) {
        next = prev1 + prev2;
        prev1 = prev2;
        prev2 = next;
    }
    return next;
}


int fibonacci_recursive(int sequence) {
    if (sequence == 1 or sequence == 2) {
        return 1;
    } else if (sequence == 0) {
        return 0;
    }
    return fibonacci_recursive(sequence - 2) + fibonacci_recursive(sequence - 1); 
}
