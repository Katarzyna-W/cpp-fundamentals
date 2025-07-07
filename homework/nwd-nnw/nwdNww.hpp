#pragma once

int NWD(int lhs, int rhs) {
    if (lhs == 0){
        return rhs;
    }
    return NWD(rhs % lhs, lhs);
}

int NWW(int lhs, int rhs) {
    int smaller = std::min(lhs, rhs);
    int bigger = std::max(lhs, rhs);
    
    for (std::size_t i = bigger; i < lhs * rhs; i += bigger){
        if (i % smaller == 0){
            return i;
        }
        
    }
    return lhs * rhs;
}
