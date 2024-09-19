//
// Created by asbpo on 03-09-2024.
//

#include <iostream>

int main() {
    int x,y;
    std::cin >> x >> y;
    if(x > y) {
        std::cout << x <<" is bigger than " << y << std::endl;
        return 0;
    }else if(x < y){
     std::cout << x << " is smaller than " << y << std::endl;
     return 0;
    }
    std::cout << x << " is equal to " << y << std::endl;
    return 0;
};
