//
// Created by asbpo on 03-09-2024.
//

#include <cstdlib>
#include <iostream>
#include "readNIntegers.h++"


int main() {
    int n;
    std::cin >> n;
    float result = 0, f;
    for(int i = 0; i < n; i++){
        std::cin >> f;
        result += f;
    }
    std::cout << result;
    return 0;
};