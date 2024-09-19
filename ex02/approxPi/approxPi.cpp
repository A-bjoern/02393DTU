//
// Created by asbpo on 03-09-2024.
//

#include <iostream>
#include <math.h>

double pi(double n){
    double result = 0;
    for(int i = 0; i < n; i++){
        result += pow((-1),i)/((2*i)+1);
    }
    return result*4;
};

/*int main(){
    double n;
    std::cin >> n;
    n = pi(n);
    std::cout << n;
    return 0;
}*/