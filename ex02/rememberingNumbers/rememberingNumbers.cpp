//
// Created by asbpo on 10-09-2024.
//

#include <iostream>

int main() {
    int arr[1000];
    int in;
    for(int i = 0; i < 1001; i++) arr[i] = 0;
    while(true){
        std::cin >> in;
        if (in < 1 || in > 1000)
            return 0;
        arr[in] += 1;
        std::cout << (arr[in]-1) << std::endl;
    }
    return 0;
}
