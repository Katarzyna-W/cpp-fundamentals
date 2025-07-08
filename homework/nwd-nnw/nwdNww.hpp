#pragma once

int NWD(int lhs, int rhs) {
    if (lhs == 0){
        return rhs;
    }
    return NWD(rhs % lhs, lhs);
}

int NWW(int lhs, int rhs) {
    int bigger = std::abs(std::max(lhs, rhs));
    int lcm {};
    if (lhs == 0 or rhs == 0) {
        return 0;
    }
    if (lhs == rhs) {
        return std::abs(lhs);
    }
    
    do
    {
        if (bigger % lhs == 0 && bigger % rhs == 0)
        {
            lcm = bigger;
            break;
        }
        else
            ++bigger;
    } while (true);
    return lcm;
    
}
